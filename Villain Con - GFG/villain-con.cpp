//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        int maxx = 0;
        vector<int>adj[N+1], indeg(N+1, 0);
        for(int i=0; i<M; i++)
        {
            adj[mat[i][0]].push_back(mat[i][1]);
            indeg[mat[i][1]]++;
        }
        queue<int>q;
        for(int i=0; i<=N; i++)
        {
            if(indeg[i] == 0) q.push(i);
        }
        int cnt = 0;
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                auto now = q.front();
                q.pop();
                for(auto x:adj[now])
                {
                    indeg[x]--;
                    if(indeg[x]==0) q.push(x);
                }
            }
            cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends