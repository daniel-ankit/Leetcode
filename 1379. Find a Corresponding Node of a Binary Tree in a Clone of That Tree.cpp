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
    void inorder(vector<TreeNode*> &v, TreeNode* root)
    {
        if(root==NULL) return;
        inorder(v, root->left);
        v.push_back(root);
        inorder(v, root->right);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        vector<TreeNode*> v1, v2;
        inorder(v1, original);
        inorder(v2, cloned);
        for(int i=0; i<v1.size(); i++)
            if(v1[i]==target) return v2[i];
        return NULL;
    }
};

int main()
{
    Solution object;
    
    return 69;
}