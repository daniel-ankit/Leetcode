//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> Adj[]) {
        vector<int>adj[V], out(V, 0), ans;
        for(int i=0; i<V; i++)
        {
            for(auto x:Adj[i])
            {
                adj[x].push_back(i);
                out[i]++;
            }
        }
        queue<int> q;
        for(int i=0; i<V; i++)
        {
            if(out[i]==0) q.push(i);
        }
        while(!q.empty())
        {
            int now = q.front(); q.pop();
            ans.push_back(now);
            for(auto x:adj[now])
            {
                out[x]--;
                if(out[x]==0) q.push(x);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends