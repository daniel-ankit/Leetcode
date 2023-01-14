//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};
        queue<vector<int>>q;
        dist[0][0] = 0;
        q.push({0, 0, 0});
        while(!q.empty())
        {
            int d = q.front()[0], x = q.front()[1], y = q.front()[2];
            q.pop();
            for(int i=0; i<4; i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m)
                {
                    int curr = max(d, abs(heights[x][y]-heights[nx][ny]));
                    if(curr < dist[nx][ny])
                    {
                        dist[nx][ny] = curr;
                        q.push({curr, nx, ny});
                    }
                }
            }
        }
        return dist[n-1][m-1];

        // int n = heights.size(), m = heights[0].size();
        // int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
        // queue<vector<int>>q;
        // vector<vector<int>>dist(n, vector<int>(m, INT_MAX));
        // q.push({0, 0, 0});
        // dist[0][0] = 0;
        // while(!q.empty())
        // {
        //     int z = q.front()[0], x = q.front()[1], y = q.front()[2];
        //     q.pop();
        //     for(int i=0; i<4; i++)
        //     {
        //         int nx = x+dx[i], ny = y+dy[i];
        //         if(nx>=0 && nx<n && ny>=0 && ny<m)
        //         {
        //             int curr = max(abs(heights[x][y]-heights[nx][ny]), z);
        //             if(curr < dist[nx][ny])
        //             {
        //                 dist[nx][ny] = curr;
        //                 q.push({curr, nx, ny});
        //             }
        //         }
        //     }
        // }
        // return dist[n-1][m-1];
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends