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
    int minSwaps(vector<int>& nums) {
        int ones = 0, n = nums.size();
        for(int i=0; i<n; i++)
            if(nums[i]) ones++;
        int sum = 0;
        for(int i=0; i<ones; i++)
        {
            nums.push_back(nums[i]);
            sum += nums[i];
        }
        int maxx = sum;
        // cout << sum;
        for(int i=ones; i < nums.size(); i++)
        {
            sum = sum - nums[i-ones] + nums[i];
            maxx = max(sum, maxx);
        }
        return ones-maxx;
    }
};

int main()
{
    Solution object;
    
    return 69;
}