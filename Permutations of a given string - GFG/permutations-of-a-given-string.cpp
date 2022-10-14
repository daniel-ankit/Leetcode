//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    set<string> s;
		    int fact = 1;
		    for(int i=1; i<=S.size(); i++) fact *= i;
		    sort(S.begin(), S.end());
		    for(int i=0; i<fact; i++)
		    {
		        next_permutation(S.begin(), S.end());
		        s.insert(S);
		    }
		    for(auto x:s) ans.push_back(x);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends