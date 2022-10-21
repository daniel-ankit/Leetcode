//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        vector<int> dp(N+1, 0);
        int m = 100000000;
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3; i<=N; i++)
            dp[i] = (dp[i-1]%m + dp[i-2]%m)%m;
        return dp[N];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends