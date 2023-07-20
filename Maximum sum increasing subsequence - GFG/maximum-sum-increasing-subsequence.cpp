//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    set<int>set;
	    for(int i=0; i<n; i++) set.insert(arr[i]);
	    vector<int>temp(set.begin(), set.end());
	    int m = set.size();
	    int dp[n+1][m+1];
	    for(int i=0; i<=n; i++)
	    {
	        for(int j=0; j<=m; j++)
	        {
	            if(i==0 || j==0) dp[i][j] = 0;
	            else
	            {
	                if(arr[i-1] == temp[j-1]) dp[i][j] = dp[i-1][j-1]+arr[i-1];
	                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	            }
	        }
	    }
	    return dp[n][m];
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends