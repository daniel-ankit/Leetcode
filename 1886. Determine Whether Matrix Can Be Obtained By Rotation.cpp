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
private:
    void rotate(vector<vector<int>>& matrix)
    {
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=i; j<matrix[0].size(); j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        for(int i=0; i<matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        for(int i=0; i<4; i++)
        {
            if(mat==target) return 1;
            rotate(mat);
        }
        return 0;
    }
};

int main()
{
    
    return 69;
}