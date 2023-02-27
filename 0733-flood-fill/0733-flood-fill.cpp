class Solution {
    void dfs(int i, int j, vector<vector<int>>&image, int &col, int &org)
    {
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]!=org) return;
        if(image[i][j] == org) image[i][j] = col;
        dfs(i-1, j, image, col, org);
        dfs(i+1, j, image, col, org);
        dfs(i, j-1, image, col, org);
        dfs(i, j+1, image, col, org);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        int org = image[sr][sc];
        dfs(sr, sc, image, color, org);
        return image;
    }
};