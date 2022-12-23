//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


long long getSum(int [],int n);
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<getSum(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this method */
long long getSum(int A[],int n)
{
    int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    long long int ans = 0, mod = 1e9+7;
    for(int i=0; i<fact[n]; i++)
    {
        next_permutation(A, A+n);
        long long temp = 0;
        for(int i=0; i<n; i++)
        {
            temp += A[n-1-i]*pow(10, i);
        }
        ans = (ans%mod + temp%mod)%mod;
    }
    return ans;
}