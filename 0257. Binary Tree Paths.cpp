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
    vector<string> ans;
    void inorder(TreeNode* root, string s)
    {
        if(root->left == NULL && root->right == NULL)
        {
            s += to_string(root->val);
            ans.push_back(s);
            return;
        }
        s += to_string(root->val) + "->";
        if(root->left) inorder(root->left, s);
        if(root->right) inorder(root->right, s);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        inorder(root, s);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}