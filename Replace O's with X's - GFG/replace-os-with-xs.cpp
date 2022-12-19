//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    void dfs(vector<vector<char>>&res, int i, int j, vector<vector<bool>>&vis, vector<vector<char>>&org)
    {
        if(i<0 || j<0 || i>=org.size() || j>=org[0].size() || vis[i][j] || org[i][j]=='X') return;
        vis[i][j] = 1;
        res[i][j] = 'O';
        dfs(res, i-1, j, vis, org);
        dfs(res, i+1, j, vis, org);
        dfs(res, i, j-1, vis, org);
        dfs(res, i, j+1, vis, org);
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<char>>res(n, vector<char>(m, 'X'));
        vector<vector<bool>>vis(n, vector<bool>(m, 0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if((i==0 || j==0 || i==n-1 || j==m-1) && mat[i][j]=='O')
                dfs(res, i, j, vis, mat);
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends