//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    int mp[26] = {0}, count = 0;
    for(auto x:S1) mp[x-'a']++;
    for(auto x:S2)
    {
        if(mp[x-'a']>0) mp[x-'a']--;
        else count++;
    }
    return count;
}