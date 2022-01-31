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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> level;
            int n = q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* top = q.front();
                q.pop();
                level.push_back(top->val);
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}