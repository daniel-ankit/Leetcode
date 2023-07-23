//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string printString(string &S, char ch, int count)
	{
	    stack<char>st;
	    for(int i=S.size()-1; i>=0; i--) st.push(S[i]);
	    while(!st.empty() && count)
	    {
	        if(st.top()==ch) count--;
	        st.pop();
	    }
	    string ans;
	    while(!st.empty())
	    {
	        ans += st.top();
	        st.pop();
	    }
	    return ans.size()==0 ? "Empty string" : ans;
	}
};

//{ Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		char ch;
   		int count;

   		cin >> s >> ch >> count;
   		Solution ob;
   		cout << ob.printString(s, ch, count) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends