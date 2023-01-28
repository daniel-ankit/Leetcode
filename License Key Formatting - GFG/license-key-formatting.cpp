//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string S, int K){
    	reverse(S.begin(), S.end());
    	string ans;
    	int cnt = 0;
    	string temp;
    	for(int i=0; i<S.size(); i++)
    	{
    	    if(cnt<K && S[i]!='-')
    	    {
    	        if(S[i]>='a' && S[i]<='z') S[i] -= 32;
    	        temp += S[i];
    	        cnt++;
    	    }
    	    if(cnt==K)
    	    {
    	        ans += temp+'-';
    	        cnt = 0;
    	        temp = "";
    	    }
    	}
    	if(!temp.empty())
    	    ans += temp;
    	else if(!ans.empty()) ans.pop_back();
    	reverse(ans.begin(), ans.end());
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
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends