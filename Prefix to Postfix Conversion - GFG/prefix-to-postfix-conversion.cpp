//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToPost(string pre) {
        stack<string>st;
        reverse(pre.begin(), pre.end());
        for(auto x:pre)
        {
            if((x>='a' && x<='z') || (x>='A' && x<='Z'))
            {
                string temp;
                temp += x;
                st.push(temp);
            }
            else
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                st.push(a+b+x);
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends