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
    int singleNumber(vector<int>& nums)
    {
        map<int, int> M;
        for(auto x:nums) M[x]++;
        for(auto x : M)
            if(x.second==1) return (x.first);
        return nums[0];
    }
};

int main()
{
    vector<int> nums = {2, 2, 2, 6, 6, 6, 3};
    Solution object;
    cout << object.singleNumber(nums);
    return 69;
}