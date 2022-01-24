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
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int count_zero = 0;
        long long mul = 1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0 && count_zero==0) count_zero++;
            else mul*=nums[i];
        }
        for(int i=0; i<nums.size(); i++)
            nums[i] = (nums[i]==0) ? (mul) : (!(count_zero)*mul/nums[i]);
        return nums;
    }
};

int main()
{
    vector<int> V = {1,2,3,4};
    Solution object;
    V = object.productExceptSelf(V);
    return 69;
}