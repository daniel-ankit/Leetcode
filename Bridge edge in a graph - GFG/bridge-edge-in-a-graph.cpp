//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    void dfs(vector<int> adj[], vector<int>&vis, int ind)
    {
        vis[ind] = 1;
        for(auto x:adj[ind])
            if(!vis[x]) dfs(adj, vis, x);
    }
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<int> vis2(V, 0);
        int parts1 = 0;
        for(int i=0; i<V; i++)
        {
            if(!vis2[i])
            {
                dfs(adj, vis2, i);
                parts1++;
            }
        }
        vector<int> linksc = adj[c], linksd = adj[d], vis(V, 0);
        adj[c] = {}, adj[d] = {};
        for(auto x:linksc)
            if(x!=d) adj[c].push_back(x);
        for(auto x:linksd)
            if(x!=c) adj[d].push_back(x);
        int parts2 = 0;
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                dfs(adj, vis, i);
                parts2++;
            }
        }
        return parts2 == parts1+1;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


// } Driver Code Ends