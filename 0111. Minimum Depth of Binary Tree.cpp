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
    int minDepth(TreeNode* root)
    {
        if(root==NULL) return 0;
        queue<pair<TreeNode*, int>> Q;
        int i = 1;
        Q.push({root, i});
        while(!Q.empty())
        {
            int nodes = Q.size();
            while(nodes--)
            {
                auto now = Q.front();
                Q.pop();
                if(now.first->left == NULL && now.first->right==NULL) return i;
                if(now.first->left) Q.push({now.first->left, i});
                if(now.first->right) Q.push({now.first->right, i});
            }
            i++;
        }
        return i;
    }
};

int main()
{
    Solution object;
    
    return 69;
}