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
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()<=2) return nums.size();
        int index = 2;
        for(int i=2; i<nums.size(); i++)
        {
            if(nums[i]!=nums[index-2])
                swap(nums[i], nums[index++]);
        }
        return index;
    }
};

int main()
{
    vector<int> nums = {1,1,1,2,2,3};
    Solution object;
    cout << object.removeDuplicates(nums);
    return 69;
}