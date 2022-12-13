class Solution {
    bool check(vector<vector<char>>&board, int r, int c)
    {
        for(int i=0; i<9; i++)
        {
            if(i!=c && board[r][i]==board[r][c]) return 1;
        }
        for(int i=0; i<9; i++)
        {
            if(i!=r && board[i][c]==board[r][c]) return 1;
        }
        int x = (r/3)*3, y = (c/3)*3;
        for(int i=x; i<x+3; i++)
        {
            for(int j=y; j<y+3; j++)
            {
                if(i!=r && j!=c && board[r][c]==board[i][j])
                    return 1;
            }
        }
        return 0;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.' and check(board, i, j)) return 0;
            }
        }
        return 1;
    }
};