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
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        vector<vector<int>> V;
        if(root==NULL) return V;
        
        stack<vector<int>> S;
        queue<TreeNode*> Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            vector<int> level;
            int nodes = Q.size();
            for(int i=0; i<nodes; i++)
            {
                TreeNode* now = Q.front();
                level.push_back(now->val);
                Q.pop();
                if(now->left) Q.push(now->left);
                if(now->right) Q.push(now->right);
            }
            S.push(level);
        }
        while(!S.empty())
        {
            V.push_back(S.top());
            S.pop();
        }
        return V;
    }
};

int main()
{
    Solution object;
    
    return 69;
}