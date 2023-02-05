//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string convert(string S, int n) {
        if(n==1) return S;
        vector<string>temp(n, "");
        int dir = 0, j=0;
        for(int i=0; i<S.size(); i++)
        {
            if(!dir)
            {
                temp[j].push_back(S[i]);
                j++;
                if(j==n-1) dir = 1;
            }
            else
            {
                temp[j].push_back(S[i]);
                j--;
                if(j==0) dir = 0;
            }
        }
        for(int i=1; i<n; i++)
            temp[0] += temp[i];
        return temp[0];
    }
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends