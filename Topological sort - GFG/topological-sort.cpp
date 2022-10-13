//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void dfs(vector<int> adj[], vector<int> &vis, vector<int>&topo, int ind) {
        vis[ind] = 1;
        for(auto x:adj[ind])
        {
            if(!vis[x]) dfs(adj, vis, topo, x);
        }
        topo.push_back(ind);
    }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>indegree(V, 0);
	    for(int i=0; i<V; i++)
	    {
	        for(auto x:adj[i])
	            indegree[x]++;
	    }
	    queue<int> q;
	    vector<int> topo;
	    for(int i=0; i<V; i++)
	    {
	        if(indegree[i]==0) q.push(i);
	    }
	    while(!q.empty())
	    {
	        int now = q.front();
	        q.pop();
    	    topo.push_back(now);
	        for(auto x:adj[now])
	        {
	            indegree[x]--;
	            if(indegree[x]==0) q.push(x);
	        }
	    }
	    return topo;
	    {
	    vector<int> vis(V, 0), topo;
	    for(int i=0; i<V; i++)
	    {
	        if(!vis[i])
	        {
	            dfs(adj, vis, topo, i);
	        }
	    }
	    reverse(topo.begin(), topo.end());
	    return topo;
	    }
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends