//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void dfs(int i, vector<int>&vis, vector<vector<int>>& adj, long long &nodes, long long &edges)
    {
        if(vis[i]) return;
        nodes++;
        edges += adj[i].size();
        vis[i] = 1;
        for(auto x:adj[i])
            dfs(x, vis, adj, nodes, edges);
    }
  public:
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        vector<int>vis(V+1, 0);
        int cnt = 0;
        for(int i=1; i<=V; i++)
        {
            if(!vis[i])
            {
                long long nodes = 0, edges = 0;
                dfs(i, vis, adj, nodes, edges);
                if(nodes*(nodes-1) == edges) cnt++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends