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
    vector<int> rearrangeArray(vector<int>& nums)
    {
        vector<int> pos, neg;
        for(auto x : nums)
            (x<0) ? (neg.push_back(x)) : (pos.push_back(x));
        int i=0, j=0, k=nums.size()/2;
        nums.clear();
        while(k--)
        {
            nums.push_back(pos[i++]);
            nums.push_back(neg[j++]);
        }
        return nums;
    }
};

int main()
{
    vector<int> nums ={3,1,-2,-5,2,-4};
    Solution object;
    nums = object.rearrangeArray(nums);
    return 69;
}