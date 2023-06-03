//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
	public:
	int perfectSum(int arr[], int n, int sum)
	{
	    int mod = 1000000007;
	    vector<vector<int>>dp(n+1, vector<int>(sum+1, 0));
	    dp[0][0] = 1;
	    for(int i=1; i<=n; i++)
	    {
	        for(int j=0; j<=sum; j++)
	        {
	            if(arr[i-1]<=j) dp[i][j] = (dp[i-1][j]%mod + dp[i-1][j-arr[i-1]]%mod)%mod;
	            else dp[i][j] = dp[i-1][j];
	        }
	    }
	    return dp[n][sum];
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends