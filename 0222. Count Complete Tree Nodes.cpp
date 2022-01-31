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
    void traverse(int &nodes, TreeNode* root)
    {
        if(root==NULL) return;
        traverse(nodes, root->left);
        nodes++;
        traverse(nodes, root->right);
    }
public:
    int countNodes(TreeNode* root)
    {
        int ans = 0;
        traverse(ans, root);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}