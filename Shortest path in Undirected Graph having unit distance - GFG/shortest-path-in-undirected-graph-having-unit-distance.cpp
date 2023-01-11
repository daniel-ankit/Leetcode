//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int> dist(N, INT_MAX);
        int steps = 0;
        vector<int>adj[N];
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        queue<int>q;
        q.push(src);
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                auto now = q.front();
                q.pop();
                dist[now] = min(dist[now], steps);
                for(auto x:adj[now]) 
                {
                    if(dist[x]==INT_MAX) q.push(x);
                }
            }
            steps++;
        }
        for(auto &x:dist)
        {
            if(x==INT_MAX) x=-1;
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends