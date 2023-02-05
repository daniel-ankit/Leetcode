//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    bool fn(string wild, string pattern, int i, int j, vector<vector<int>>&dp)
    {
        if(i<0 && j<0) return 1;
        if(i<0 && j>=0) return 0;
        if(j<0 && i>=0)
        {
            for(int k=0; k<=i; k++)
                if(wild[k]!='*') return 0;
            return 1;
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(wild[i]=='?' || wild[i]==pattern[j]) return dp[i][j] = fn(wild, pattern, i-1, j-1, dp);
        if(wild[i]=='*') return dp[i][j] = fn(wild, pattern, i-1, j, dp) or fn(wild, pattern, i, j-1, dp);
        return dp[i][j] = 0;
    }
    public:
    bool match(string wild, string pattern)
    {
        int n = wild.size(), m = pattern.size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return fn(wild, pattern, n-1, m-1, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends