#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    vector<vector<int>> mat;
    int dfs(int i, int j)
    {
        if(i<0 || i>=mat.size() || j<0 || j>=mat[0].size() || mat[i][j]==0) return 0;
        mat[i][j] = 0;
        return (1 + dfs(i+1, j) + dfs(i-1, j) + dfs(i, j-1) + dfs(i, j+1));
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int ans = 0;
        mat = grid;
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[0].size(); j++)
                if(mat[i][j]) ans = max(ans, dfs(i, j));
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}