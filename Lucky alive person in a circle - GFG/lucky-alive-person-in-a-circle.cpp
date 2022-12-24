//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int hp2(int n)
    {
        int i=0;
        while(n >= (1<<i)) i++;
        return (1<<(i-1));
    }
public:
    int find(int N){
        return 2*(N - hp2(N))+1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends