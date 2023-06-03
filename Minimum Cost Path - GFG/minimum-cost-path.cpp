//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define tuple pair<int, pair<int, int>>
class Solution
{
    public:
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>dist(n, vector<int>(m ,INT_MAX));
        priority_queue<tuple, vector<tuple>, greater<tuple>>pq;
        pq.push({grid[0][0], {0,0}});
        dist[0][0] = grid[0][0];
        vector<int>dx = {0, 0, 1, -1}, dy = {1, -1, 0, 0};
        while(!pq.empty())
        {
            auto dis = pq.top().first, x = pq.top().second.first, y = pq.top().second.second;
            pq.pop();
            if(x==n-1 && y==m-1) return dist[x][y];
            for(int i=0; i<4; i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && dist[nx][ny] >= grid[nx][ny] + dist[x][y])
                {
                    dist[nx][ny] = grid[nx][ny] + dist[x][y];
                    pq.push({dist[nx][ny], {nx, ny}});
                }
            }
        }
        return dist[n-1][m-1];
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
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends