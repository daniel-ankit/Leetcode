bool cmp(vector<int> &a, vector<int> &b)
{
    if(a[0]!=b[0]) return a[0]<b[0];
    return a[1]<b[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count = 1;
        sort(points.begin(), points.end(), cmp);
        auto last = points[0];
        for(auto x:points)
        {
            if(last[1]<x[0])
            {
                last = x;
                count++;
            }
            else
            {
                last[0] = max(last[0], x[0]);
                last[1] = min(last[1], x[1]);
            }
        }
        return count;
    }
};