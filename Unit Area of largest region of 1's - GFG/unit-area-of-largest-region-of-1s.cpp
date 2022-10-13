//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void dfs(vector<vector<int>>& grid, int i, int j, int &area)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0) return;
        grid[i][j] = 0;
        area++;
        dfs(grid, i-1, j-1, area);
        dfs(grid, i-1, j, area);
        dfs(grid, i-1, j+1, area);
        dfs(grid, i, j-1, area);
        dfs(grid, i, j+1, area);
        dfs(grid, i+1, j-1, area);
        dfs(grid, i+1, j, area);
        dfs(grid, i+1, j+1, area);
    }
    public:
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), maxx = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    int area = 0;
                    dfs(grid, i, j, area);
                    maxx = max(maxx, area);
                }
            }
        }
        return maxx;
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
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends