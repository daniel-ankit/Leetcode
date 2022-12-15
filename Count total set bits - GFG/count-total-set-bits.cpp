//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int countSetBits(int n)
    {
        int ans = 0;
        while(n>0)
        {
            int i=0;
            while(pow(2, i) <= n) i++;
            i--;
            ans += i*pow(2, i-1) + (n-pow(2, i)+1);
            n -= pow(2, i);
        }
        return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends