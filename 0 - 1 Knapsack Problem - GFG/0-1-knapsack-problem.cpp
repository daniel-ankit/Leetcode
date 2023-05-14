//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    int knapsack(int wt[], int W, int n, int val[], vector<vector<int>>&dp)
    {
        if(n==0 || W<=0) return 0;
        if(dp[n][W] != -1) return dp[n][W];
        if(wt[n-1]<=W) return dp[n][W] = max(val[n-1]+knapsack(wt, W-wt[n-1], n-1, val, dp), knapsack(wt, W, n-1, val, dp));
        return dp[n][W] = knapsack(wt, W, n-1, val, dp);
    }
    public:
    int knapSack(int W, int wt[], int val[], int n)
    { 
        vector<vector<int>>dp(n+1, vector<int>(W+1, -1));
       knapsack(wt, W, n, val, dp);
       return dp[n][W];
    }
};


//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends