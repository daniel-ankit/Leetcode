//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string getSmallest(long long N) {
        if(N==1) return "1";
        string ans;
        while(N!=1)
        {
            if(N%9==0) N/=9, ans+='9';
            else if(N%8==0) N/=8, ans+='8';
            else if(N%7==0) N/=7, ans+='7';
            else if(N%6==0) N/=6, ans+='6';
            else if(N%5==0) N/=5, ans+='5';
            else if(N%4==0) N/=4, ans+='4';
            else if(N%3==0) N/=3, ans+='3';
            else if(N%2==0) N/=2, ans+='2';
            else return "-1";
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.getSmallest(N) << endl;
    }
    return 0;
}
// } Driver Code Ends