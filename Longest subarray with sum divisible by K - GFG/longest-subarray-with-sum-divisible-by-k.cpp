//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    map<int, int>mp;
	    mp[0] = -1;
	    long long int sum = 0;
	    int ans = 0;
	    for(int i=0; i<n; i++)
	    {
	        sum += arr[i];
	        int rem = sum%k;
	        if(rem<0) rem+=k;
	        if(mp.find(rem) != mp.end())
	            ans = max(ans, i-mp[rem]);
	        else mp[rem] = i;
	    }
	    return ans;
	}
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends