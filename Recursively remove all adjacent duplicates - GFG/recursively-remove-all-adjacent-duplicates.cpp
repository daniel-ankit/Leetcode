//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        string ans;
        for(int i=0; i<s.size(); i++)
        {
            if((i>0 && s[i-1]==s[i]) || (i<s.size()-1 && s[i]==s[i+1])) continue;
            else ans+=s[i];
        }
        if(ans.size()==s.size()) return ans;
        return rremove(ans);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends