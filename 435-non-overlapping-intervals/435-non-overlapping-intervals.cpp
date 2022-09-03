bool cmp(vector<int> &a, vector<int> &b)
{
    if(a[0]!=b[0]) return a[0]<b[0];
    return a[1]<b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        auto last = intervals[0];
        int count = 0;
        for(int i=1; i<intervals.size(); i++)
        {
            auto x = intervals[i];
            if(last[1]>x[0])
            {
                last[1] = min(x[1], last[1]);
                count++;
            }
            else last = x;
        }
        return count;
    }
};