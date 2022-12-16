//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

    public:
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int N, int M) 
    { 
        vector<vector<int>> dp(N, vector<int>(M, -1));
        queue<pair<int, int>> q;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(matrix[i][j]=='B')
                {
                    dp[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        int dis = 0;
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int x = q.front().first, y = q.front().second;
                q.pop();
                dp[x][y] = dis;
                if(x-1 >=0 && matrix[x-1][y]=='O') q.push({x-1, y}), matrix[x-1][y] = 'B';
                if(x+1 < N && matrix[x+1][y]=='O') q.push({x+1, y}), matrix[x+1][y] = 'B';
                if(y-1 >=0 && matrix[x][y-1]=='O') q.push({x, y-1}), matrix[x][y-1] = 'B';
                if(y+1 < M && matrix[x][y+1]=='O') q.push({x, y+1}), matrix[x][y+1] = 'B';
            }
            dis++;
        }
        return dp;
        
    } 
};

//{ Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
    	int M,N;
        cin>>M;
        cin>>N;

        vector<vector<char> > matrix(M);
        for(int i=0; i<M; ++i)
        {
            matrix[i].resize(N);
            for (int j = 0; j < N; ++j)
                cin>>matrix[i][j];
        }

        vector<vector<int> >result;
        Solution obj;
        result = obj.findDistance(matrix, M,N); 
        for(int i=0; i<M; ++i)
        {
            for (int j = 0; j < N; ++j)
                cout<<result[i][j]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}
// } Driver Code Ends