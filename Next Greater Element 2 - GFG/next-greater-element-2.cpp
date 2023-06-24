//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        vector<int>ans;
        for(int i=0; i<N; i++)
            arr.push_back(arr[i]);
        stack<int>stack;
        for(int i=2*N-1; i>=0; i--)
        {
            while(!stack.empty() && stack.top()<=arr[i])
                stack.pop();
            stack.empty() ? ans.push_back(-1) : ans.push_back(stack.top());
            stack.push(arr[i]);
        }
        reverse(ans.begin(), ans.end());
        for(int i=0; i<N; i++) ans.pop_back();
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends