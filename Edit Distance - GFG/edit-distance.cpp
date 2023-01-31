//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<int>>dp(2, vector<int>(m+1, 0));
        for(int j=0; j<=m; j++) dp[0][j] = j;
        for(int i=1; i<=n; i++)
        {
            dp[1][0] = i;
            for(int j=1; j<=m; j++)
            {
                if(s[i-1]==t[j-1]) dp[1][j] = dp[0][j-1];
                else dp[1][j] = min({dp[0][j], dp[1][j-1], dp[0][j-1]})+1;
            }
            dp[0] = dp[1];
        }
        return dp[1][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends