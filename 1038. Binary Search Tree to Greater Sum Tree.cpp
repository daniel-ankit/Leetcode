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
    int sum = 0;
    void inorder(TreeNode* root)
    {
        if(root==NULL) return;
        inorder(root->right);
        sum+=root->val;
        root->val = sum;
        inorder(root->left);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        inorder(root);
        return root;
    }
};

int main()
{    
    return 69;
}