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
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root==NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> V;
        inorder(root, V);
        int diff = INT_MAX;
        for(int i=1; i<V.size(); i++)
            diff = min(V[i]-V[i-1], diff);
        return diff;
    }
};

int main()
{
    Solution object;
    
    return 69;
}