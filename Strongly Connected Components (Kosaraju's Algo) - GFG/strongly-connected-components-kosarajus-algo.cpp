//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void dfs(int i, vector<vector<int>>& adj, vector<int>&vis, stack<int>&stack)
    {
        if(vis[i]) return;
        vis[i] = 1;
        for(auto x:adj[i])
            dfs(x, adj, vis, stack);
        stack.push(i);
    }
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        vector<int>vis(V, 0);
        stack<int>stack, temp;
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
                dfs(i, adj, vis, stack);
        }
        vector<vector<int>>rev(V);
        for(int i=0; i<V; i++)
        {
            for(auto x:adj[i])
                rev[x].push_back(i);
        }
        for(auto &x:vis) x=0;
        int cnt = 0;
        while(!stack.empty())
        {
            int now = stack.top();
            stack.pop();
            if(!vis[now])
            {
                dfs(now, rev, vis, temp);
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends