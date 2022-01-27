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
    vector<int> singleNumber(vector<int>& nums)
    {
        map<int, int> M;
        vector<int> ans;
        for(auto x:nums) M[x]++;
        for(auto x : M)
        {
            if(x.second==1) ans.push_back(x.first);
            if(ans.size()==2) return ans;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {2, 2, 4,6, 6, 8, 10, 10};
    Solution object;
    nums = object.singleNumber(nums);
    return 69;
}