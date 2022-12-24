//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int N, long long int A[])
    {
        long long int mod = 1e9+7, count = 0;
        for(int i=0; i<32; i++)
        {
            int off = 0, on = 0;
            for(int j=0; j<N; j++)
            {
                if(A[j] & (1<<i)) on++;
                else off++;
            }
            count = (count%mod + (on%mod * off%mod * 2)%mod)%mod;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends