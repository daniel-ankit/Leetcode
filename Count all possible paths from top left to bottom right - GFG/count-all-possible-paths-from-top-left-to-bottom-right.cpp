//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        vector<vector<long long>>dp(m, vector<long long>(n, 1));
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%1000000007;
        }
        return dp[m-1][n-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends