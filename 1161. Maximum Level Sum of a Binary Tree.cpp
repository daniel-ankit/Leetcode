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
    int maxLevelSum(TreeNode* root)
    {
        int level = 1, maxx = INT_MIN, ans = 1;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            int nodes = Q.size();
            int sum = 0;
            for(int i=0; i<nodes; i++)
            {
                TreeNode* now = Q.front();
                Q.pop();
                sum+=now->val;
                if(now->left)Q.push(now->left);
                if(now->right)Q.push(now->right);
            }
            // cout << sum << " " << level << endl;
            if(sum > maxx)
            {
                ans = level;
                maxx = sum;
            }
            level++;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}