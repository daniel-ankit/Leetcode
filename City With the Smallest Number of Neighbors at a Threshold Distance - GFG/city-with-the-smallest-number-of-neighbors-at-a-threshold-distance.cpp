//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int distance) {
        vector<vector<int>>mat(n, vector<int>(n, INT_MAX));
        for(auto x:edges)
        {
            mat[x[0]][x[1]] = x[2];
            mat[x[1]][x[0]] = x[2];
        }
        for(int i=0; i<n; i++) mat[i][i] = 0;
        
        for(int via = 0; via<n; via++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(mat[i][via] == INT_MAX || mat[via][j] == INT_MAX) continue;
                    mat[i][j] = min(mat[i][j], mat[i][via] + mat[via][j]);
                }
            }
        }
        int min = n, ind = -1;
        for(int i=0; i<n; i++)
        {
            int cnt = 0;
            for(int j=0; j<n; j++)
            {
                if(mat[i][j] <= distance) cnt++;
            }
            if(cnt <= min)
            {
                ind = i;
                min = cnt;
            }
        }
        return ind;
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