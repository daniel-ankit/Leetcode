//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	int mod = 1e9+7;
	ll countStrings(int n) {
	    vector<ll>dp(n, 2);
	    dp[1] = 3;
	    for(int i=2; i<n; i++)
	        dp[i] = (dp[i-1]%mod + dp[i-2]%mod)%mod;
	    return dp[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends