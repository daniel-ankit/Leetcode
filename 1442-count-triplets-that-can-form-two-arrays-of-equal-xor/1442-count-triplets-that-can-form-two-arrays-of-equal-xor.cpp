class Solution {
public:
    int countTriplets(vector<int>& arr) {
        map<int, vector<int>>mp;
        mp[0].push_back(-1);
        int xorr = 0, ans=0;
        for(int i=0; i<arr.size(); i++)
        {
            xorr ^= arr[i];
            if(mp.find(xorr)!=mp.end())
            {
                for(auto x:mp[xorr])
                    ans += i-x-1;
            }
            mp[xorr].push_back(i);
        }
        return ans;
    }
};