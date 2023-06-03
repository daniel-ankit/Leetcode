//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string mostFrequentWord(string arr[], int n) 
    {
        unordered_map<string, int>mp;
        int maxx = 0;
        for(int i=0; i<n; i++)
        {
            mp[arr[i]]++;
            maxx = max(maxx, mp[arr[i]]);
        }
        string ans;
        for(int i=0; i<n; i++)
        {
            if(mp[arr[i]]==maxx)
            {
                ans = arr[i];
                mp[arr[i]]--;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends