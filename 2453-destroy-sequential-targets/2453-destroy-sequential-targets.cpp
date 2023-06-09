class Solution {
public:
    int destroyTargets(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;
        int maxx = 0, ans = 0;
        for(auto &x:nums)
        {
            if(mp.count(x%k)==0) mp[x%k] = {1,x};
            else
            {
                mp[x%k][0]++;
                mp[x%k][1] = min(x, mp[x%k][1]);
            }
            if(mp[x%k][0] > maxx)
            {
                maxx = mp[x%k][0];
                ans = mp[x%k][1];
            }
            if(mp[x%k][0]==maxx)
                ans = min(ans,mp[x%k][1]);
        }
        return ans;
    }
};