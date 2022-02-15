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
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = accumulate(nums.begin(), nums.end(), 0ll);
        int ans = abs(sum - goal)/limit;
        if((sum-goal)%limit==0) return ans;
        return ans+1;
        
    }
};

int main()
{
    Solution object;
    
    return 69;
}