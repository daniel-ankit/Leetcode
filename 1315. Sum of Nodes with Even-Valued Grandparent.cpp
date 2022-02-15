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
    int ans = 0;
    void sum(TreeNode* root)
    {
        if(root==NULL) return;
        if(root->val%2==0)
        {
            if(root->left)
            {
                if(root->left->left) ans+= root->left->left->val;
                if(root->left->right) ans+= root->left->right->val;
            }
            if(root->right)
            {
                if(root->right->left) ans+= root->right->left->val;
                if(root->right->right) ans+= root->right->right->val;
            }
        }
        sum(root->left);
        sum(root->right);
    }
        
public:
    int sumEvenGrandparent(TreeNode* root)
    {
        sum(root);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}