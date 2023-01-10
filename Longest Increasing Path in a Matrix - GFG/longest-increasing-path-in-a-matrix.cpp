//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    int dfs(int i, int j, int n, int m, vector<vector<int>>&dp, vector<vector<int>>&mat, int prev)
    {
        if(i<0 || i>=n || j<0 || j>=m || mat[i][j]<=prev) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int path = 0;
        path = max(path, dfs(i+1, j, n, m, dp, mat, mat[i][j]));
        path = max(path, dfs(i-1, j, n, m, dp, mat, mat[i][j]));
        path = max(path, dfs(i, j+1, n, m, dp, mat, mat[i][j]));
        path = max(path, dfs(i, j-1, n, m, dp, mat, mat[i][j]));
        return dp[i][j] = path+1;
    }
  public:
    int longestIncreasingPath(vector<vector<int>>& matrix, int n, int m) {
        vector<vector<int>>dp(n, vector<int>(m, -1));
        int maxx = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                maxx = max(maxx, dfs(i, j, n, m , dp, matrix, INT_MIN));
            }
        }
        return maxx;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.longestIncreasingPath(matrix, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends