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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>Q;
        Q.push(root);
        bool foundastupidnode = 0;
        // Stupid Node = One that has a left node but not a right node or a leaf node
        while(!Q.empty())
        {
            TreeNode* now = Q.front();
            Q.pop();
            if(!foundastupidnode)
            {
                if(now->left==NULL && now->right!=NULL) return 0;
                else if(now->left && now->right)
                {
                    Q.push(now->left);
                    Q.push(now->right);
                }
                else
                {
                    foundastupidnode = 1;
                    if(now->left) Q.push(now->left);
                }
            }
            // Let's say we found one stupid node. Every node after it must not have any child.
            // They can only be leaf nodes.
            else if(now->left || now->right) return 0;
        }
        return 1;
    }
};

int main()
{
    Solution object;
    
    return 69;
}