//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int n = nums.size();
	    vector<int>pre(n, 1), post(n, 1);
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<i; j++)
	        {
	            if(nums[j] < nums[i]) pre[i] = max(pre[i], pre[j]+1);
	        }
	    }
	    for(int i=n-1; i>=0; i--)
	    {
	        for(int j=n-1; j>i; j--)
	        {
	            if(nums[j] < nums[i]) post[i] = max(post[i], post[j]+1);
	        }
	    }
	    int maxx = 0;
	    for(int i=0; i<n; i++)
	    {
	        maxx = max(maxx, pre[i]+post[i]-1);
	    }
	    return maxx;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends