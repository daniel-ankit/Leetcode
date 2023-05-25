//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
    int fn(int i, int x, int y, int a[], int b[], vector<vector<int>>&dp)
    {
        if(i<0) return 0;
        if(dp[x][y] != -1) return dp[x][y];
        if(x && y) return dp[x][y] = max(a[i] + fn(i-1, x-1, y, a, b, dp), b[i] + fn(i-1, x, y-1, a, b, dp));
        if(x) return dp[x][y] = a[i] + fn(i-1, x-1, y, a, b, dp);
        if(y) return dp[x][y] = b[i] + fn(i-1, x, y-1, a, b, dp);
        return dp[x][y] = 0;
    }
  public:
    long long maxTip(int a[], int b[], int n, int x, int y) {
        vector<pair<int, int>> vec;
        for(int i=0; i<n; i++)
            vec.push_back({abs(a[i]-b[i]), i});
        sort(vec.begin(), vec.end());
        long long ans = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(x && y)
            {
                if(a[vec[i].second] > b[vec[i].second]) ans += a[vec[i].second], x--;
                else ans += b[vec[i].second], y--;
            }
            else if(x) ans += a[vec[i].second], x--;
            else ans += b[vec[i].second], y--;
        }
        return ans;
        
        /*
        vector<pair<int, int>> vec;
        for(int i=0; i<n; i++)
            vec.push_back({a[i], b[i]});
        sort(vec.begin(), vec.end());
        vector<vector<int>>dp(x+1, vector<int>(y+1, -1));
        fn(n-1, x, y, a, b, dp);
        return dp[x][y];
        */
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        Solution obj;
        auto ans = obj.maxTip(a, b, n, x, y);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends