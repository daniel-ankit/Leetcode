bool cmp(vector<int>&a, vector<int> &b)
{
    if(a[0]!=b[0]) return a[0]<b[0];
    return a[1]<b[1];
}

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        stack<vector<int>> S;
        sort(intervals.begin(), intervals.end(), cmp);
        for(auto x:intervals)
        {
            if(!S.empty() && S.top()[1]>=x[0])
            {
                int minn = min(x[0], S.top()[0]);
                int maxx = max(x[1], S.top()[1]);
                S.pop();
                S.push({minn, maxx});
            }
            else S.push(x);
        }
        intervals.clear();
        while(!S.empty())
        {
            intervals.push_back(S.top());
            S.pop();
        }
        reverse(intervals.begin(), intervals.end());
        return intervals;
    }
};