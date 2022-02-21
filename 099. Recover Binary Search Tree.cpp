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
    void inorder(vector<TreeNode*> &V, TreeNode* root)
    {
        if(!root) return;
        inorder(V, root->left);
        V.push_back(root);
        inorder(V, root->right);
    }
public:
    void recoverTree(TreeNode* root)
    {
        vector<TreeNode*> V;
        inorder(V, root);
        TreeNode *a = V[0], *b = V[1];
        bool first = 0;
        for(int i=0; i<V.size()-1; i++)
        {
            if(V[i]->val > V[i+1]->val)
            {
                if(!first)
                {
                    first = 1;
                    a = V[i];
                    b = V[i+1];
                }
                else b = V[i+1];
            }
        }
        swap(a->val, b->val);
    }
};

int main()
{
    Solution object;
    
    return 69;
}