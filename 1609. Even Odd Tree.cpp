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
    bool isEvenOddTree(TreeNode* root) {
        bool even = 1;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            vector<int> level;
            int nodes = Q.size();
            int prev;
            for(int i=0; i<nodes; i++)
            {
                TreeNode* now = Q.front();
                Q.pop();
                if((even && now->val%2==0) || (!even && now->val%2==1)) return 0;
                if(now->left) Q.push(now->left);
                if(now->right) Q.push(now->right);
                level.push_back(now->val);
                if(i!=0 && ((even && prev>=now->val) || (!even && prev<=now->val))) return 0;
                prev = now->val;
            }
            even = !even;
        }
        return 1;
    }
};

int main()
{
    Solution object;
    
    return 69;
}