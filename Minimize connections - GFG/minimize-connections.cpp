//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    void dfs(int i, vector<bool>&vis, vector<int>adj[])
    {
        if(!vis[i])
        {
            vis[i] = 1;
            for(auto x:adj[i])
                dfs(x, vis, adj);
        }
    }
    public:
        int minimumConnections(vector<vector<int>> &c,int n)
        {
            if(c.size() < n-1) return -1;
            vector<bool> vis(n, 0);
            vector<int>adj[n];
            int cnt = 0;
            for(auto x:c)
            {
                adj[x[0]].push_back(x[1]);
                adj[x[1]].push_back(x[0]);
            }
            for(int i=0; i<n; i++)
            {
                if(!vis[i])
                {
                    cnt++;
                    dfs(i, vis, adj);
                }
            }
            return cnt-1;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<vector<int>> c(m,vector<int> (2));
        for(auto &j:c)
            cin>>j[0]>>j[1];
        Solution s;
        cout<<s.minimumConnections(c,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends