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
    int widthOfBinaryTree(TreeNode* root) {
        long long ans = 1;
        queue<pair<TreeNode*, int>> Q;
        Q.push({root, 0});
        while(!Q.empty())
        {
            long long nodes = Q.size();
            long long start = Q.front().second, end = Q.back().second;
            ans = max(end-start+1, ans);
            for(int i=0; i<nodes; i++)
            {
                TreeNode* now = Q.front().first;
                long long parent = Q.front().second-start;
                if(now->left) Q.push({now->left, 2*parent});
                if(now->right) Q.push({now->right, 2*parent+1});
                Q.pop();
            }
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}