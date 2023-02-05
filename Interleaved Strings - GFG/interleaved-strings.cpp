//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    bool fn(string A, string B, string C, int i, int j, int k, vector<vector<int>> &dp)
    {
        if(k==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        bool X = 0, Y = 0;
        if(i>0 && A[i-1]==C[k-1]) X = fn(A, B, C, i-1, j, k-1, dp);
        if(j>0 && B[j-1]==C[k-1]) Y = fn(A, B, C, i, j-1, k-1, dp);
        return dp[i][j] = X or Y;
    }
  public:
    /*You are required to complete this method */
    bool isInterleave(string A, string B, string C) 
    {
        int n = A.size(), m = B.size(), o = C.size();
        if(n+m!=o) return 0;
        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
        return fn(A, B, C, n, m, o, dp);
    }

};


//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends