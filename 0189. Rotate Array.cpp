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
    void rotate(vector<int>& nums, int k)
    {
        vector<int> V(nums.size());
        for(int i=0; i<nums.size(); i++)
            V[(i+k)%nums.size()] = nums[i];
        nums=V;
    }
};

int main()
{
    vector<int> V = {1, 2, 3, 4, 5, 6, 7};
    Solution object;
    object.rotate(V, 3);
    return 69;
}