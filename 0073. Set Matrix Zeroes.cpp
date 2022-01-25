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


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        set<int> R, C;
        int rows = matrix.size();
        int columns = matrix[0].size();
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
                if(matrix[i][j]==0) R.insert(i), C.insert(j);
        }
        for(auto x : R)
            for(int i=0; i<columns; i++)
                matrix[x][i] = 0;
        for(auto x : C)
            for(int i=0; i<rows; i++)
                matrix[i][x] = 0;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    Solution object;
    object.setZeroes(matrix);
    return 69;
}
