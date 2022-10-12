class Solution {
    void dfs(vector<vector<char>>&board, vector<vector<int>>&vis, int i, int j)
    {
        if(i<0 || i>=board.size() || j<0 || j>= board[0].size() || vis[i][j] || board[i][j]=='X') return;
        vis[i][j] = 1;
        board[i][j] = '#';
        dfs(board, vis, i+1, j);
        dfs(board, vis, i-1, j);
        dfs(board, vis, i, j+1);
        dfs(board, vis, i, j-1);
    }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if((i==0 || i==n-1 || j==0 || j==m-1) && !vis[i][j] && board[i][j]=='O')
                    dfs(board, vis, i, j);
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]=='#') board[i][j] = 'O';
                else board[i][j] = 'X';
            }
        }
    }
};