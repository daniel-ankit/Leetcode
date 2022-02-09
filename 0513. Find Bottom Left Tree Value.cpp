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
    int findBottomLeftValue(TreeNode* root)
    {
        queue<TreeNode*> Q;
        Q.push(root);
        int ans = root->val;
        while(!Q.empty())
        {
            int nodes = Q.size();
            ans = Q.front()->val;
            for(int i=0; i<nodes; i++)
            {
                if(Q.front()->left) Q.push(Q.front()->left);
                if(Q.front()->right) Q.push(Q.front()->right);
                Q.pop();
            }
            cout << ans << " ";
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}