//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<ll> ans = {1};
        int m = 1e9+7;
        for(int i=2; i<=n; i++)
        {
            vector<ll> temp = ans;
            for(int j=1; j<ans.size(); j++)
                temp[j] = (ans[j]%m + ans[j-1]%m)%m;
            temp.push_back(1);
            ans = temp;
        }
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends