//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int, int>> q;
        int xi, yi, xf, yf;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    xi = i, yi = j;
                    q.push({i, j});
                    grid[i][j] = 0;
                }
                if(grid[i][j]==2)
                    xf = i, yf = j;
                if(grid[i][j]==0) grid[i][j] = 0;
            }
        }
        while(!q.empty())
        {
            auto x = q.front().first, y = q.front().second;
            q.pop();
            grid[x][y] = 0;
            if(x==xf && y==yf) return 1;
            if(x-1 >= 0 && grid[x-1][y]!=0) q.push({x-1, y}), grid[x-1][y] = 0;
            if(x+1 < n && grid[x+1][y]!=0) q.push({x+1, y}), grid[x+1][y] = 0;
            if(y-1 >= 0 && grid[x][y-1]!=0) q.push({x, y-1}), grid[x][y-1] = 0;
            if(y+1 < m && grid[x][y+1]!=0) q.push({x, y+1}), grid[x][y+1] = 0;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends