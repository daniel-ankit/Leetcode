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
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        if(nums==temp) return 0;
        int start = 0, end = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(temp[i]!=nums[i])
            {
                start = i;
                break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(temp[i]!=nums[i])
            {
                end = i;
                break;
            }
        }
        return end-start+1;
    }
};

int main()
{
    Solution object;
    
    return 69;
}