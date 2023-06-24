//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
    int mod = 1000000007;
public:
    long long int power(int a, long long int b) { 
        if(b==0) return 1;
        if(b%2) return (a*power(a, b-1))%mod;
        long long ans = power(a, b/2);
        return (ans * ans)%mod;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends