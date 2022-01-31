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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
    vector<int> V;
    int size=0;
    int i=-1;
    void inorder(TreeNode* root)
    {
        if(root==NULL) return;
        inorder(root->left);
        V.push_back(root->val);
        inorder(root->right);
    }
public:
    BSTIterator(TreeNode* root)
    {
        V.clear();
        inorder(root);
        size = V.size();
    }
    
    int next()
    {
        return V[++i];
    }
    
    bool hasNext()
    {
        if(i+1<=size-1) return 1;
        return 0;
    }
};

int main()
{
    return 69;
}