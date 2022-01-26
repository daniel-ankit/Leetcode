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
    void inorder(vector<int> &V, TreeNode* root)
    {
        if(root==NULL) return;
        inorder(V, root->left);
        V.push_back(root->val);
        inorder(V, root->right);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2)
    {
        vector<int> V;
        inorder(V, root1);
        inorder(V, root2);
        sort(V.begin(), V.end());
        return V;
    }
};

int main()
{
    
    return 69;
}