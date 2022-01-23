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
public:
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector <int> V;
        traverse(V, root);
        return V;
    }
    void traverse(vector<int> &V, TreeNode *root)
    {
        if(root == NULL) return;
        traverse(V, root->left);
        traverse(V, root->right);
        V.push_back(root->val);
    }
};

int main()
{
    
    return 69;
}
