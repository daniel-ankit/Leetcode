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
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        set<int> S;
        for(auto x:nums)
            S.insert(x);
        int count = 1, prev, ans = 1;
        bool first = 1;
        for(auto x:S)
        {
            if(first) first = 0;
            else
            {
                (x-prev==1) ? (count++) : (count = 1);
                ans = max(ans, count);
            }
            prev = x;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}