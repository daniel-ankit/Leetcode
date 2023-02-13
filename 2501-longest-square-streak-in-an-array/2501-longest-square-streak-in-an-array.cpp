class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        long long maxx=0;
        set<int>S;
        for(auto x:nums) S.insert(x);
        for(auto x:nums)
        {
            long long find = x, cnt = 0;
            while(S.find(find) != S.end())
            {
                cnt++;
                if(cnt==5 || (long long)find*(long long)find > INT_MAX) break;
                find = find*find;
            }
            if(cnt>=2) maxx = max(cnt, maxx);
        }
        return maxx==0 ? -1 : maxx;
    }
};