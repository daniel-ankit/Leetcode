//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string nextPalin(string N) { 
        string temp;
        string mid;
        if(N.size()%2) mid += N[N.size()/2];
        for(int i=0; i<N.size()/2; i++)
            temp += N[i];
        string next = temp;
        sort(temp.begin(), temp.end());
        next_permutation(next.begin(), next.end());
        if(temp == next) return "-1";
        string second = next;
        reverse(second.begin(), second.end());
        return next + mid + second;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}
// } Driver Code Ends