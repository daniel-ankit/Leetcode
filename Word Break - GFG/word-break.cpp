//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
    bool fn(int i, string temp, string a, unordered_set<string>set)
    {
        if(i==a.size())
        {
            if(temp == "") return 1;
            return 0;
        }
        temp += a[i];
        if(set.find(temp) != set.end()) return fn(i+1, temp, a, set) || fn(i+1, "", a, set);
        return fn(i+1, temp, a, set);
    }
public:
    int wordBreak(string A, vector<string> &B) {
        unordered_set<string>set;
        for(auto x:B)
            set.insert(x);
        return fn(0, "", A, set);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends