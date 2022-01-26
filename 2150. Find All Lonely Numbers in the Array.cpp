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
    vector<int> findLonely(vector<int>& nums)
    {
        int n = nums.size();
        if(n==1 || n==0) return nums;
        vector<int> V;
        sort(nums.begin(), nums.end());
        if(n==2)
        {
            if(nums[1]-nums[0]>1) return nums;
            return V;
        }
        if(nums[1]-nums[0]>1) V.push_back(nums[0]);
        if(nums[n-1]-nums[n-2]>1) V.push_back(nums[n-1]);
        for(int i=1; i<n-1; i++)
            if(nums[i]-nums[i-1]>1 && nums[i+1]-nums[i]>1) V.push_back(nums[i]);
        return V;
    }
};

int main()
{
    vector<int> nums = {10,6,5,8};
    Solution object;
    nums = object.findLonely(nums);
    return 69;
}