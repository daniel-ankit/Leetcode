//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
    bool fn(int i, vector<int>&arr, int W, vector<vector<int>>&dp)
    {
        if(W==0) return 1;
        if(i<0) return 0;
        if(dp[i][W] != -1) return dp[i][W];
        if(arr[i] <= W) return dp[i][W] = fn(i-1, arr, W-arr[i], dp) || fn(i-1, arr, W, dp);
        return fn(i-1, arr, W, dp);
    }
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>>dp(n, vector<int>(sum+1, -1));
        return fn(n-1, arr, sum, dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends