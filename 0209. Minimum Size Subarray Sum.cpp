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
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int i = 0, j = 0;
        int window = INT_MAX;
        while(j<nums.size())
        {
            sum += nums[j];
            if(sum>=target)
            {
                while(sum-nums[i]>=target)
                {
                    sum-=nums[i];
                    i++;
                }
                window = min(window, j-i+1);
            }
            j++;
            // cout << window << " ";
        }
        return window==INT_MAX ? 0 : window;
    }
};

int main()
{
    Solution object;
    
    return 69;
}