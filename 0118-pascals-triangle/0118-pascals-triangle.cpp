class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans = {{1}};
        if(n==1) return ans;
        for(int i=1; i<n; i++)
        {
            vector<int>temp = {1};
            for(int j=0; j<ans[i-1].size()-1; j++)
                temp.push_back(ans[i-1][j] + ans[i-1][j+1]);
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};