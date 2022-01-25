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
    void preorder(vector<int> &val, vector<TreeNode*> &ptr, TreeNode* root)
    {
        if(root==NULL) return;
        val.push_back(root->val);
        ptr.push_back(root);
        preorder(val, ptr, root->left);
        preorder(val, ptr, root->right);
    }
public:
    void flatten(TreeNode* root)
    {
        if(root==NULL) return;
        vector<int> V;
        vector<TreeNode*> p;
        preorder(V, p, root);
        for(int i=0;i<V.size()-1; i++)
        {
            p[i]->left = NULL;
            p[i]->val = V[i];
            p[i]->right = p[i+1];
        }
        p[p.size()-1]->left = NULL;
        p[p.size()-1]->val = V[p.size()-1];
        p[p.size()-1]->right = NULL;
        root = p[0];
    }
};

int main()
{
    Solution object;
    return 69;
}