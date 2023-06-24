//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        int cnt = 0;
        int i=0, j=0;
        while(i<S.size())
        {
            if(S[i] == W[j])
            {
                S[i] = '#';
                j++;
            }
            if(j==W.size())
            {
                cnt++;
                j=0;
                i=0;
            }
            i++;
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends