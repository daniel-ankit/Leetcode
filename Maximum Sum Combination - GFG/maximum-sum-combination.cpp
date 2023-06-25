//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int M = B.size();
        priority_queue<pair<int, pair<int, int>>>pq;
        for(int i=0; i<A.size(); i++)
            pq.push({A[i]+B[M-1], {i, M-1}});
        vector<int>ans;
        while(K--)
        {
            auto val = pq.top().first, i = pq.top().second.first, j = pq.top().second.second;
            pq.pop();
            ans.push_back(val);
            if(j>0) pq.push({A[i]+B[j-1], {i, j-1}});
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends