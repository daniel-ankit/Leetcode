class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> visited(n,vector<int> (m,0));
        queue<pair<pair<int,int>,int>> q;

        if(grid[0][0]!=0 || grid[n-1][m-1]!=0) return -1;
        
        q.push({{0,0},0});
        visited[0][0]=1;

        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            if(row==n-1 && col==m-1) return dist+1;
            
            int delrow[]={1,0,-1,-1,-1,0,1,1};
            int delcol[]={-1,-1,-1,0,1,1,1,0};

            for(int i=0; i<8; i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];

                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==0 && !visited[nrow][ncol]){
                    q.push({{nrow,ncol},dist+1});
                    visited[nrow][ncol] = 1;
                }
            }
        }
        return -1;
    }
};