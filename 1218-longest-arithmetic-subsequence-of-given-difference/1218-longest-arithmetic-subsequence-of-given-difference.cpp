class Solution {
    int fn(int i, int prev_ind, vector<int>&arr, int k, vector<vector<int>>&dp)
    {
        if(i>=arr.size()) return 0;
        if(dp[i][prev_ind+1] != -1) dp[i][prev_ind+1];
        if(prev_ind == -1 || arr[i]-arr[prev_ind] == k)
            return dp[i][prev_ind+1] = max(1+fn(i+1, i, arr, k, dp), fn(i+1, prev_ind, arr, k, dp));
        return dp[i][prev_ind+1] = fn(i+1, prev_ind, arr, k, dp);
    }
public:
    int longestSubsequence(vector<int>& arr, int k) {
        map<int, int>mp;
        int maxx = 0;
        for(int i=0; i<arr.size(); i++)
        {
            if(mp.find(arr[i]-k)==mp.end()) mp[arr[i]] = 1;
            else mp[arr[i]] = mp[arr[i]-k] + 1;
            maxx = max(maxx, mp[arr[i]]);
        }
        return maxx;
        
        // int n = arr.size();
        // vector<vector<int>>dp(n, vector<int>(n+1, -1));
        // return fn(0, -1, arr, k, dp);
    }
};