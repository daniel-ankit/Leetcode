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
    int Height(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1 + max(Height(root->left), Height(root->right));
    }
public:
    vector<vector<string>> printTree(TreeNode* root)
    {
        int height = Height(root)-1;
        int rows = height+1, columns = pow(2, height+1)-1;
        vector<vector<string>> ans(rows, vector<string>(columns, ""));
        queue<pair<TreeNode*, pair<int, int>>> Q;
        
        Q.push({root, {0, (columns-1)/2}});
        while(!Q.empty())
        {
            TreeNode* now = Q.front().first;
            int x = Q.front().second.first, y = Q.front().second.second;
            Q.pop();
            ans[x][y] = to_string(now->val);
            if(now->left) Q.push({now->left, {x+1, y-pow(2, height-x-1)}});
            if(now->right) Q.push({now->right, {x+1, y+pow(2, height-x-1)}});
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}