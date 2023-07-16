//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int fn(int s, int d, vector<int>adj[])
    {
        if(s==d) return 1;
        int cnt = 0;
        for(auto x:adj[s])
            cnt += fn(x, d, adj);
        return cnt;
    }
public:
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    vector<int>adj[n];
	    for(auto x:edges)
	        adj[x[0]].push_back(x[1]);
	    return fn(s, d, adj);
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends