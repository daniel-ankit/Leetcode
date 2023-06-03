//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            string ans, temp;
            for(int i=s.size()-1; i>=0; i--)
            {
                if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
                {
                    reverse(temp.begin(), temp.end());
                    ans += temp + s[i];
                    temp = "";
                }
                else temp += s[i];
            }
            reverse(temp.begin(), temp.end());
            return ans+temp;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends