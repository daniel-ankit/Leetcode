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
    int minPairSum(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int ans = INT_MIN, i=0;
        while(i<nums.size()/2)
            ans = max(ans, nums[i]+nums[nums.size()-1-i++]);
        return ans;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4,4};
    Solution object;
    cout << object.minPairSum(nums);
    return 69;
}