//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
	bool recreationalSpot(int nums[], int n){
	    if(n<3) return 0;
		stack<int> S;
		int minn = INT_MIN;
		for(int i=n-1; i>=0; i--)
		{
		    if(nums[i] < minn) return 1;
		    else
		    {
		        while(!S.empty() && S.top()<nums[i])
		        {
		            minn = max(minn, S.top());
		            S.pop();
		        }
		        S.push(nums[i]);
		    }
		}
		return 0;
	}
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution ob;
		if(ob.recreationalSpot(arr, n))
		    cout<<"True"<<endl;
		else
		    cout<<"False"<<endl;
	}
	return 0;
}
// } Driver Code Ends