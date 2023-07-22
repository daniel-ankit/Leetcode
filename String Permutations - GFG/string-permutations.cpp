//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string>ans;
    string temp;
    void fn(string S, vector<int>&taken)
    {
        if(temp.size()==S.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0; i<S.size(); i++)
        {
            if(!taken[i])
            {
                taken[i] = 1;
                temp.push_back(S[i]);
                fn(S, taken);
                taken[i] = 0;
                temp.pop_back();
            }
        }
    }

    vector<string> permutation(string S)
    {
        vector<int>taken(S.size(), 0);
        fn(S, taken);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends