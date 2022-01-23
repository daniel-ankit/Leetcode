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
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        vector <string> P, Q;
        inordertraversal(p, P);
        inordertraversal(q, Q);
        return (P==Q);
    }
    void inordertraversal(TreeNode *root, vector<string> &V)
    {
        if (root == NULL)
        {
            V.push_back("null");
            return;
	    }
        inordertraversal(root->left, V);
        V.push_back(to_string(root->val));
        inordertraversal(root->right, V);
    }
};

int main()
{
    
    return 69;
}