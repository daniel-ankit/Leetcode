//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        string ans;
        string temp;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='.')
            {
                reverse(temp.begin(), temp.end());
                while(temp.size()>1 && temp.back()=='0') temp.pop_back();
                reverse(temp.begin(), temp.end());
                ans += temp + '.';
                temp = "";
            }
            else temp += s[i];
        }
        reverse(temp.begin(), temp.end());
        while(temp.size()>1 && temp.back()=='0') temp.pop_back();
        reverse(temp.begin(), temp.end());
        ans += temp;
        return ans;
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
        cout <<ob.newIPAdd (s) << endl;
    }
}


// } Driver Code Ends