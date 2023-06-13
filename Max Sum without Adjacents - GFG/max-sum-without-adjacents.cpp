//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(vector<int>&arr, int n) {
	    if(n==1) return arr[0];
	    vector<int>dp(n, 0);
	    dp[0] = arr[0];
	    dp[1] = max(arr[1], arr[0]);
	    for(int i=2; i<n; i++)
	    {
	        dp[i] = max(dp[i-2]+arr[i], dp[i-1]);
	    }
	    return max(dp[n-1], dp[n-2]);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends