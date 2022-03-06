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
    vector<vector<int>> ans;
    void findpath(TreeNode* root, vector<int> current, int sum)
    {
        if(root==NULL) return;
        current.push_back(root->val);
        if(root->left==NULL && root->right==NULL && sum-root->val == 0)
        {
            ans.push_back(current);
            return;
        }
        findpath(root->left, current, sum-root->val);
        findpath(root->right, current, sum-root->val);
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> current;
        findpath(root, current, targetSum);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}