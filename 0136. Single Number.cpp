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

class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        return accumulate(nums.cbegin(), nums.cend(), 0, bit_xor());
    }
};


int main()
{
    vector<int> V = {4, 4, 2, 9, 8, 2, 3, 1};
    Solution object;
    object.singleNumber(V);
    return 69;
}