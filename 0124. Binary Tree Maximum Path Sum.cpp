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
    int maxPathSum(TreeNode* root, long long &maxx)
    {
        if(root==NULL) return 0;
        long long left = max(0, maxPathSum(root->left, maxx));
        long long right = max(0, maxPathSum(root->right, maxx));
        maxx = max(maxx, left+right+root->val);
        cout << maxx << " ";
        return root->val + max(left, right);
    }
public:
    int maxPathSum(TreeNode* root) {
        long long maxx = INT_MIN;
        maxPathSum(root, maxx);
        return maxx;
    }
};

int main()
{
    Solution object;
    
    return 69;
}