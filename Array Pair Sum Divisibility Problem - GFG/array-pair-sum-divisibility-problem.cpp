//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int, int>mp;
        for(auto x:nums)
            mp[x%k]++;
        if(mp[0]%2) return 0;
        for(int i=1;i<k;i++)
        {
            if(mp[i]!=mp[k-i]) return 0;
        }
        return 1;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends