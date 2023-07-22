//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    set<string>ans;
    void fn(string &temp, string &S, vector<int>&taken)
    {
        if(temp.size()==S.size())
        {
            ans.insert(temp);
            return;
        }
        for(int i=0; i<S.size(); i++)
        {
            if(!taken[i])
            {
                taken[i] = 1;
                temp.push_back(S[i]);
                fn(temp, S, taken);
                temp.pop_back();
                taken[i] = 0;
            }
        }
    }
	public:
	vector<string>find_permutation(string S)
    {
		int n = S.size();
		vector<int>taken(n, 0); 
		string temp;
        fn(temp, S, taken);
	    return vector<string>(ans.begin(), ans.end());
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
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends