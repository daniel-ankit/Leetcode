//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<pair<int, int>>adj[n+1];
        for(auto x:edges)
        {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        vector<int>dist(n+1, INT_MAX), parent(n+1);
        for(int i=0; i<=n; i++) parent[i] = i;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        pq.push({0,1});
        dist[1] = 0;
        while(!pq.empty())
        {
            auto node = pq.top().second, dis = pq.top().first;
            pq.pop();
            for(auto x:adj[node])
            {
                if(dist[x.first] > dis + x.second)
                {
                    parent[x.first] = node;
                    dist[x.first] = dis + x.second;
                    pq.push({dist[x.first], x.first});
                }
            }
        }
        if(dist[n]==INT_MAX) return {-1};
        vector<int>ans;
        int i = n;
        while(i!=1)
        {
            ans.push_back(i);
            i = parent[i];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
        return ans;
        
        // vector<vector<int>>adj[n+1];
        // for(auto x:edges)
        // {
        //     adj[x[0]].push_back({x[1], x[2]});
        //     adj[x[1]].push_back({x[0], x[2]});
        // }
        // vector<int>dist(n+1, INT_MAX), parent(n+1, 0);
        // for(int i=1; i<=n; i++) parent[i] = i;
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // pq.push({0,1});
        // dist[1] = 0;
        // while(!pq.empty())
        // {
        //     auto node = pq.top().second, dis = pq.top().first;
        //     pq.pop();
        //     for(auto x:adj[node])
        //     {
        //         if(dis + x[1] < dist[x[0]])
        //         {
        //             parent[x[0]] = node;
        //             dist[x[0]] = dis+x[1];
        //             pq.push({dist[x[0]], x[0]});
        //         }
        //     }
        // }
        // if(dist[n]==INT_MAX) return {-1};
        // vector<int> path(1, n);
        // int i=n;
        // while(i!=1)
        // {
        //     path.push_back(parent[i]);
        //     i = parent[i];
        // }
        // reverse(path.begin(), path.end());
        // return path;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends