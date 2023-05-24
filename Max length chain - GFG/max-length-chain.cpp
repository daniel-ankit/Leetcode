//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

bool cmp(struct val &a, struct val &b)
{
    return a.second < b.second;
}

class Solution{
    
public:
    int maxChainLen(struct val p[],int n){
        int ans = 0, last = 0;
        sort(p, p+n, cmp);
        for(int i=0; i<n; i++)
        {
            if(last < p[i].first)
            {
                ans++;
                last = p[i].second;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends