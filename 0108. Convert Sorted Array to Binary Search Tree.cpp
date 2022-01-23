#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        auto middle = nums.begin() + (nums.size() / 2);
        
        TreeNode* tree = new TreeNode(*middle);
        
        insert_(tree->left, nums.begin(), middle);
        insert_(tree->right, middle + 1, nums.end());
        
        return tree;
    }
    
    template<typename Iter>
    void insert_(TreeNode*& node, Iter begin, Iter end)
    {
        if (begin != end)
        {
            auto middle = begin;
            std::advance(middle, std::distance(begin, end) / 2);
        
            node = new TreeNode(*middle);
            
            insert_(node->left, begin, middle);
            insert_(node->right, middle + 1, end);
        }

    }
};

int main()
{
    
    return 69;
}