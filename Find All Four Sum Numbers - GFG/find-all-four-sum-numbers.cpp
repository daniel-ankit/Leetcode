//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int>> ans;
        set<vector<int>> S;
        sort(arr.begin(), arr.end());
        for(int a=0; a<arr.size()-3; a++)
        {
            for(int b=a+1; b<arr.size()-2; b++)
            {
                for(int c=b+1; c<arr.size()-1; c++)
                {
                    int start = c+1, end = arr.size()-1, find = k-arr[a]-arr[b]-arr[c];
                    while(start<=end)
                    {
                        int mid = (start+end)/2;
                        if(arr[mid]==find)
                        {
                            vector<int> temp = {arr[a], arr[b], arr[c], arr[mid]};
                            sort(temp.begin(), temp.end());
                            S.insert(temp);
                            break;
                        }
                        if(arr[mid]<find) start = mid+1;
                        else end = mid-1;
                    }
                }
            }
        }
        for(auto x:S) ans.push_back(x);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends