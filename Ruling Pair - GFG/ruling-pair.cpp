//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    
    public:
    int RulingPair(vector<int> arr, int n) 
    { 
    	map<int, priority_queue<int>>mp;
    	for(auto x:arr)
    	{
    	    int y = x, cnt = 0;
    	    while(y)
    	    {
    	        cnt+=y%10;
    	        y/=10;
    	    }
    	    mp[cnt].push(x);
    	}
    	int maxx = -1;
    	for(auto x:mp)
    	{
    	    if(x.second.size()>1)
    	    {
    	        int a = x.second.top();
    	        x.second.pop();
    	        maxx = max(maxx, a+x.second.top());
    	    }
    	}
    	return maxx;
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
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
	    Solution obj;
		cout << obj.RulingPair(arr,n)<<"\n";
	}
	return 0; 
} 


// } Driver Code Ends