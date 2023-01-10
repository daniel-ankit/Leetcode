//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
    int dfs(int i, int j, int n, int m, vector<vector<int>>&dp, vector<vector<int>>&mat, int prev)
    {
        if(i<0 || i>=n || j<0 || j>=m || mat[i][j] <= prev) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int path = 0;
        path = max(path, dfs(i+1, j, n, m, dp, mat, mat[i][j]));
        path = max(path, dfs(i-1, j, n, m, dp, mat, mat[i][j]));
        path = max(path, dfs(i, j+1, n, m, dp, mat, mat[i][j]));
        path = max(path, dfs(i, j-1, n, m, dp, mat, mat[i][j]));
        return dp[i][j] = path+1;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size(), maxx = 0;
        vector<vector<int>>dp(n, vector<int>(m, -1));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                maxx = max(maxx, dfs(i, j, n, m, dp, mat, INT_MIN));
            }
        }
        return maxx;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends