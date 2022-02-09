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
    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> view;
        if(root==NULL) return view;
        queue<TreeNode*> Q;
        Q.push(root);
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
            view.push_back(level[level.size()-1]);
        }
        return view;
    }
};

int main()
{
    Solution object;
    
    return 69;
}