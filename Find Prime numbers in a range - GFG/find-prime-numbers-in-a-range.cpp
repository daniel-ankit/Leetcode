//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        vector<int>primes(N+1, 1);
        primes[0] = primes[1] = 0;
        for(int i=2; i<=N; i++)
        {
            if(primes[i])
            {
                int j = 2;
                while(j*i<=N)
                {
                    primes[j*i] = 0;
                    j++;
                }
            }
        }
        vector<int>ans;
        for(int i=M; i<=N; i++)
        {
            if(primes[i]) ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends