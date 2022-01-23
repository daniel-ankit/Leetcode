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
    int search(vector<int>& nums, int target)
    {
        int i=0, j=nums.size()-1;
        while(i<=j)
        {
            int m = (i+j)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) i=m+1;
            else j = m-1;
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {2, 4, 6, 8, 4, 9, 10, 1};
    Solution object;
    cout << object.search(nums, 6);
    return 69;
}