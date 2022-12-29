//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        vector<vector<int>> ans(n, vector<int>(n+1, 0));
        vector<int> rows(n+1, 0), cols(n+1, 0);
        for(auto x:Queries)
        {
            int a = x[0], b = x[1], c = x[2], d = x[3];
            for(int i=a; i<=c; i++)
            {
                ans[i][b]++;
                ans[i][d+1]--;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<n; j++)
                ans[i][j] += ans[i][j-1];
        }
        for(auto &x:ans) x.pop_back();
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, q;
        cin >> n >> q;
        vector<vector<int>> Queries;
        for (int i = 0; i < q; i++) {
            vector<int> cur(4);
            for (int j = 0; j < 4; j++) cin >> cur[j];
            Queries.push_back(cur);
        }
        Solution obj;
        vector<vector<int>> ans = obj.solveQueries(n, Queries);
        for (auto i : ans) {
            for (auto j : i) cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends