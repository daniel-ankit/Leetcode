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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>> iloveyouanjali;
        if(root==NULL) return iloveyouanjali;
        queue<TreeNode*> Q;
        Q.push(root);
        bool sidha = 1;
        while(!Q.empty())
        {
            int nodes = Q.size();
            vector<int> level;
            for(int i=0; i<nodes; i++)
            {
                TreeNode* now = Q.front();
                Q.pop();
                level.push_back(now->val);
                if(now->left) Q.push(now->left);
                if(now->right) Q.push(now->right);
            }
            if(!sidha) reverse(level.begin(), level.end());
            sidha = !sidha;
            iloveyouanjali.push_back(level);
        }
        return iloveyouanjali;
    }
};

int main()
{
    Solution object;
    
    return 69;
}