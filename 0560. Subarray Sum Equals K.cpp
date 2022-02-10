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
    int subarraySum(vector<int>& nums, int k)
    {
        map<int, int> S;
        S[0] = 1;       // There always exist a subarray with sum=0 (an empty array)
        int sum = 0, ans=0;
        for(auto x:nums)
        {
            sum += x;
            ans += S[sum-k];
            S[sum]++;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}