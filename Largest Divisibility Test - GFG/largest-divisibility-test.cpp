//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string largestDivisible(string num){
        long long fact = 1;
        for(long long i=1; i<=num.size(); i++)
            fact *= i;
        sort(num.begin(), num.end(), greater<char>());
        for(long long  i=0; i<fact; i++)
        {
            if(stoll(num) % 17==0) return num;
            prev_permutation(num.begin(), num.end());
        }
        return "Not Possible";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        Solution ob;
        cout<<ob.largestDivisible(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends