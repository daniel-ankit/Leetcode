class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefix(1, 0);
        for(int i=1; i<=n; i++)
        {
            prefix.push_back(prefix[i-1]^arr[i-1]);
        }
        vector<int> ans;
        for(auto x:queries)
            ans.push_back(prefix[x[1]+1]^prefix[x[0]]);
        return ans;
    }
};