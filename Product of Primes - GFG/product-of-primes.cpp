//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    bool prime(long long n)
    {
        if(n<=1) return 0;
        for(int i=2; i<=sqrt(n); i++)
            if(n%i==0) return 0;
        return 1;
    }
public:
    long long primeProduct(long long L, long long R){
        long long ans = 1, mod = 1000000007;
        for(int i=L; i<=R; i++)
        {
            if(prime(i)) ans = (ans%mod * i%mod)%mod;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends