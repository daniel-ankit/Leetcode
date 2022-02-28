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
    unordered_map<int, int> M;
    int populate(TreeNode* root)
    {
        int sum = 0;
        if(root==NULL) return 0;
        sum += root->val + populate(root->left) + populate(root->right);
        M[sum]++;
        return sum;
    }
    public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> V;
        populate(root);
        int freq = INT_MIN;
        for(auto x:M)
           if(x.second>freq) freq = x.second;
        for(auto x:M)
            if(x.second==freq) V.push_back(x.first);
        return V;
    }
};

int main()
{
    Solution object;
    
    return 69;
}