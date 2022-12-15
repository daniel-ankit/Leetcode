//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        if(divisor == 0) return (-1);
        if(dividend == 0) return (0);
        int sign = ((dividend<0) ^ (divisor<0)) ? -1 : 1;
        dividend = abs(dividend), divisor = abs(divisor);
        long long res = 0;
        while(dividend >= divisor)
        {
            long long i = 0;
            while(dividend >= divisor<<i) i++;
            i--;
            res += 1<<i;
            dividend -= divisor << i;
        }
        return res*sign;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends