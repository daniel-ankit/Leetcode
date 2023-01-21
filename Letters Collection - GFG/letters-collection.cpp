//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    int N, M;
    bool valid(int i, int j)
    {
        if(i<0 || j<0 || i>=N || j>=M) return 0;
        return 1;
    }
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int>ans;
        N = mat.size(), M = mat[0].size();
        for(int x=0; x<q; x++)
        {
            int temp = 0, i = queries[x][1], j = queries[x][2];
            if(queries[x][0]==1)
            {
                if(valid(i+1, j)) temp+=mat[i+1][j];
                if(valid(i-1, j)) temp+=mat[i-1][j];
                if(valid(i, j+1)) temp+=mat[i][j+1];
                if(valid(i, j-1)) temp+=mat[i][j-1];
                if(valid(i-1, j-1)) temp+=mat[i-1][j-1];
                if(valid(i-1, j+1)) temp+=mat[i-1][j+1];
                if(valid(i+1, j-1)) temp+=mat[i+1][j-1];
                if(valid(i+1, j+1)) temp+=mat[i+1][j+1];
            }
            else
            {
                if(valid(i-2, j-2)) temp+=mat[i-2][j-2];
                if(valid(i-2, j-1)) temp+=mat[i-2][j-1];
                if(valid(i-2, j)) temp+=mat[i-2][j];
                if(valid(i-2, j+1)) temp+=mat[i-2][j+1];
                if(valid(i-2, j+2)) temp+=mat[i-2][j+2];
                if(valid(i+2, j-2)) temp+=mat[i+2][j-2];
                if(valid(i+2, j-1)) temp+=mat[i+2][j-1];
                if(valid(i+2, j)) temp+=mat[i+2][j];
                if(valid(i+2, j+1)) temp+=mat[i+2][j+1];
                if(valid(i+2, j+2)) temp+=mat[i+2][j+2];
                
                if(valid(i+1, j+2)) temp+=mat[i+1][j+2];
                if(valid(i, j+2)) temp+=mat[i][j+2];
                if(valid(i-1, j+2)) temp+=mat[i-1][j+2];
                if(valid(i+1, j-2)) temp+=mat[i+1][j-2];
                if(valid(i, j-2)) temp+=mat[i][j-2];
                if(valid(i-1, j-2)) temp+=mat[i-1][j-2];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}
// } Driver Code Ends