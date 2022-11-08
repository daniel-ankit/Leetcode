//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int> rows(1, n), cols(1, m);
            rows.push_back(-1);
            cols.push_back(-1);
            for(auto x:enemy)
            {
                rows.push_back(x[0]-1);
                cols.push_back(x[1]-1);
            }
            int maxR = 0, maxC = 0;
            sort(rows.begin(), rows.end());
            sort(cols.begin(), cols.end());
            for(int i=1; i<rows.size(); i++)
            {
                // cout << rows[i] << " ";
                maxR = max(maxR, rows[i]-rows[i-1]-1);
                maxC = max(maxC, cols[i]-cols[i-1]-1);
            }
            // cout << endl;
            return maxR*maxC;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends