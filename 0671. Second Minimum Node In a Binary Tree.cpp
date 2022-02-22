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
    void populate(set<int> &S, TreeNode* root)
    {
        if(root==NULL) return;
        populate(S, root->left);
        S.insert(root->val);
        populate(S, root->right);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int> S;
        populate(S, root);
        int ans = -1, times = 1;
        for(auto x:S)
        {
            if(times==2)
            {
                ans = x;
                break;
            }
            times++;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}