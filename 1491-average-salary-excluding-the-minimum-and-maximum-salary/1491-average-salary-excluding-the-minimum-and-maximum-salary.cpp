class Solution {
public:
    double average(vector<int>& salary) {
        int minn = INT_MAX, maxx = INT_MIN;
        double sum = 0;
        for(auto x:salary)
        {
            sum+=x;
            minn = min(x, minn);
            maxx = max(maxx, x);
        }
        return (sum-minn-maxx)/(salary.size()-2);
    }
};