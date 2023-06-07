//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        stack<int>stack;
        int head = -1;
        for(int i=0; i<N; i++)
        {
            if(arr[i] < head) return 0;
            while(!stack.empty() && stack.top()<arr[i])
            {
                head = stack.top();
                stack.pop();
            }
            stack.push(arr[i]);
        }
        return 1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends