//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
    
public:
    int getSpecialNumber(int N)
    {
        N--;
        int ans = 0, temp = 1;
        while(N)
        {
            ans += (N%6)*temp;
            temp *= 10;
            N /= 6;
        }
        return ans;
    }

};



//{ Driver Code Starts.

int main() 
{
	int t;
	cin>>t;
	while(t-->0)
	{
	    int N;
	    cin>> N;
	     Solution ob;
	    cout<<ob.getSpecialNumber(N)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends