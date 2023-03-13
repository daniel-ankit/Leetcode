class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int, int>mp;
        for(auto x:nums) mp[x]++;
        for(auto x:mp)
        {
            int num = x.first, cnt = x.second;
            if(cnt==0) continue;
            for(int i=num; i<num+k; i++)
            {
                if(mp[i]>=cnt) mp[i]-=cnt;
                else return 0;
            }
        }
        return 1;
    }
};