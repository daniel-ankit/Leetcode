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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* Node = new TreeNode(val);
            Node->left = root;
            return Node;
        }
        vector<TreeNode*> changethem;
        int dep = 1;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            vector<TreeNode*> level;
            int nodes = Q.size();
            for(int i=0; i<nodes; i++)
            {
                TreeNode* now = Q.front();
                Q.pop();
                level.push_back(now);
                if(now->left) Q.push(now->left);
                if(now->right) Q.push(now->right);
            }
            dep++;
            if(depth==dep)
            {
                changethem = level;
                break;
            }
        }
        for(auto x:changethem)
        {
            TreeNode* Node = new TreeNode(val);
            Node->left = x->left;
            x->left = Node;
            Node = new TreeNode(val);
            Node->right = x->right;
            x->right = Node;
        }
        return root;
    }
};

int main()
{
    Solution object;
    
    return 69;
}