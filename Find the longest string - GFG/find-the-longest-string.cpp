//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

bool cmp(string &a, string &b)
{
    if(a.size()!=b.size()) return a.size() > b.size();
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!=b[i]) return a[i] < b[i];
    }
    return 1;
}

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        sort(words.begin(), words.end(), cmp);
        unordered_map<string, bool>mp;
        for(auto x:words)
            mp[x] = 1;
        for(auto x:words)
        {
            int exist = 1;
            string temp;
            for(int i=0; i<x.size(); i++)
            {
                temp += x[i];
                if(mp[temp] == 0)
                {
                    exist = 0;
                    break;
                }
            }
            if(exist) return x;
        }
        return "";
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends