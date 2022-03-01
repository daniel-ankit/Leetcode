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
        if(root==NULL) return;
        inorder(V, root->left);
        V.push_back(root);
        inorder(V, root->right);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> V;
        inorder(V, root);
        root = V[0];
        for(int i=0; i<V.size()-1; i++)
        {
            V[i]->right = V[i+1];
            V[i]->left = NULL;
        }
        V[V.size()-1]->left = V[V.size()-1]->right = NULL;
        return root;
    }
};

int main()
{
    Solution object;
    
    return 69;
}