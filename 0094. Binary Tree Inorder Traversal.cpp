#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector <int> V;
        traversal(V, root);
        return V;
    }
    void traversal(vector<int> &V, TreeNode *root)
    {
        if (root==NULL) return;
        {
            traversal(V, root->left);
            V.push_back(root->val);
            traversal(V, root->right);
        }
    }
};


int main()
{
    
    return 69;
}