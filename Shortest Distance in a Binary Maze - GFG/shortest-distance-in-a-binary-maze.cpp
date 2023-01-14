//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> s, pair<int, int> d) {
        int n = grid.size(), m = grid[0].size();
        if(grid[s.first][s.second]==0) return -1;
        if(s==d) return 0;
        int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
        queue<pair<int, int>>q;
        grid[s.first][s.second]=0;
        q.push(s);
        int dist = 1;
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for(int i=0; i<4; i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx>=0 && nx<n && ny>=0 && ny<m)
                    {
                        if(nx==d.first && ny==d.second) return dist;
                        if(grid[nx][ny]==1)
                        {
                            grid[nx][ny]=0;
                            q.push({nx, ny});
                        }
                    }
                }
            }
            dist++;
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends