//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		int NthTerm(int n){
		    long long dp[10005];
		    int mod = 1e9+7;
		    dp[1] = 2;
		    for(int i=2;i<=n;i++)
		        dp[i] = ((dp[i-1]*i)%mod + 1)%mod;
		    return dp[n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends