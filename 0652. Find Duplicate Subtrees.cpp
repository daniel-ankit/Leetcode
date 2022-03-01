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
    map<string, int> M;
    vector<TreeNode*> res;
    string inorder(TreeNode* root)
    {
        if(root==NULL) return "";
        string left = inorder(root->left);
        string right = inorder(root->right);
        string S = to_string(root->val) + "-" + left + "-" + right;
        M[S]++;
        if(M[S]==2) res.push_back(root);
        return S;
    }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        inorder(root);
        return res;
    }
};

int main()
{
    Solution object;
    
    return 69;
}