//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
long long int dp[100001];

class Solution {
    int m = 1e9+7;
  public:
    long long int topDown(int n) {
        dp[0]=0, dp[1]=1, dp[2] = 1;
        for(int i=3; i<=n; i++)
            dp[i] = (dp[i-1]+dp[i-2])%m;
        return dp[n];
    }
    long long int bottomUp(int n) {
        dp[0]=0, dp[1]=1, dp[2] = 1;
        for(int i=3; i<=n; i++)
            dp[i] = (dp[i-1]+dp[i-2])%m;
        return dp[n];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 100001; i++) dp[i] = -1;
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends