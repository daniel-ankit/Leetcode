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
    int tilt = 0;
    int findsum(TreeNode* root)
    {
        if(root==NULL) return 0;
        int leftsum = findsum(root->left), rightsum = findsum(root->right);
        tilt += abs(rightsum-leftsum);
        return root->val + rightsum + leftsum;
    }
public:
    int findTilt(TreeNode* root) {
        if(root==NULL) return 0;
        findsum(root);
        return tilt;
    }
};

int main()
{
    Solution object;
    
    return 69;
}