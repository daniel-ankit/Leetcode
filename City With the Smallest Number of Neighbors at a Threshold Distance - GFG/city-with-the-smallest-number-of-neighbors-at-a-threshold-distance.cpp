//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int distance) {
        vector<vector<int>>matrix(n, vector<int>(n, INT_MAX));
        for(auto x:edges)
        {
            matrix[x[0]][x[1]] = x[2];
            matrix[x[1]][x[0]] = x[2];
        }
        for(int i=0; i<n; i++) matrix[i][i] = 0;
        for(int via=0; via<n; via++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(matrix[i][via] == INT_MAX || matrix[via][j] == INT_MAX) continue;
                    matrix[i][j] = min(matrix[i][j], matrix[i][via]+matrix[via][j]);
                }
            }
        }
        int ans = -1, minn = n;
        for(int i=0; i<n; i++)
        {
            int cnt = 0;
            for(int j=0; j<n; j++) if(matrix[i][j] <= distance) cnt++;
            if(cnt<=minn)
            {  
                ans = i;
                minn = cnt;
            }
        }
        return ans;
    }
    
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends