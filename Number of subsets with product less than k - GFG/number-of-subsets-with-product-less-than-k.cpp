//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    int fn(int i, int prod, int arr[], int n, int k)
    {
        if(i==n)
        {
            if(prod <= k) return 1;
            return 0;
        }
        int ans = fn(i+1, prod, arr, n, k);
        if((long long) prod*arr[i] <= k) ans += fn(i+1, prod*arr[i], arr, n, k);
        return ans;
    }
  public:
    int numOfSubsets(int arr[], int N, int K) {
        return fn(0, 1, arr, N, K)-1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends