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
    int diameter(TreeNode* root, int &maxx)
    {
        if(root==NULL) return 0;
        int left = diameter(root->left, maxx);
        int right = diameter(root->right, maxx);
        maxx = max(maxx, left+right);
        // cout << maxx << " ";
        return 1 + max(left, right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxx = 0;
        diameter(root, maxx);
        return maxx;
    }
};

int main()
{
    Solution object;
    
    return 69;
}