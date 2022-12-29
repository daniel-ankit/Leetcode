//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> printMissingIntervals(int a[], int n) {
        vector<int> nums(100000, 1), ans;
        for(int i=0; i<n; i++) nums[a[i]]=0;
        int start = -1;
        for(int i=0; i<100000; i++)
        {
            if(nums[i]==1)
            {
                if(start == -1) start = i;
            }
            if(nums[i]==0)
            {
                if(start!=-1)
                {
                    ans.push_back(start);
                    ans.push_back(i-1);
                }
                start = -1;
            }
        }
        if(start!=-1)
        {
            ans.push_back(start);
            ans.push_back(99999);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        Solution ob;
        vector<int> vec = ob.printMissingIntervals(a,n);
        
        for(int i=0 ; i<vec.size() ; i+=2)
        {
            if (vec[i]==vec[i+1])
                cout<<vec[i];
            else
                cout<<vec[i]<<"-"<<vec[i+1];
            if(i!=vec.size()-2)
                cout<<",";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends