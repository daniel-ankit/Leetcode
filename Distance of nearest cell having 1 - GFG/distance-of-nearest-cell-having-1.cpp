//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n = grid.size(), m = grid[0].size();
	    vector<vector<int>> vis(n, vector<int>(m, 0)), dis(n, vector<int>(m, 0));
	    queue<pair<int, int>> q;
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            if(grid[i][j]==1)
	            {
	                vis[i][j] = 1;
	                q.push({i, j});
	            }
	        }
	    }
	    int level = 0;
	    while(!q.empty())
	    {
	        int size = q.size();
	        for(int i=0; i<size; i++)
	        {
	            int x = q.front().first, y = q.front().second;
	            q.pop();
	            dis[x][y] = level;
	            if(x+1 < n && !vis[x+1][y]) q.push({x+1, y}), vis[x+1][y] = 1;
	            if(x-1 >= 0 && !vis[x-1][y]) q.push({x-1, y}), vis[x-1][y] = 1;
	            if(y+1 < m && !vis[x][y+1]) q.push({x, y+1}), vis[x][y+1] = 1;
	            if(y-1 >= 0 && !vis[x][y-1]) q.push({x, y-1}), vis[x][y-1] = 1;
	        }
	        level++;
	    }
	    return dis;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends