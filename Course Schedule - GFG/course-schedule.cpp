//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    vector<int> findOrder(int N, int m, vector<vector<int>> pre) 
    {
        vector<int> adj[N];
	    for(auto x:pre)
	        adj[x[1]].push_back(x[0]);
	    queue<int> q;
	    vector<int> topo, indegree(N, 0);
	    for(int i=0; i<N; i++)
	    {
	        for(auto x:adj[i])
	            indegree[x]++;
	    }
	    for(int i=0; i<N; i++)
	        if(indegree[i]==0) q.push(i);
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
	    if(topo.size()==N) return topo;
	    return {};
    }
};

//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
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
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends