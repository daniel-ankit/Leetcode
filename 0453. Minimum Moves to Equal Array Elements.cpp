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
    int minMoves(vector<int>& nums)
    {
        int minn = INT_MAX;
        int sum = 0;
        for(auto x : nums)
        {
            if(x<minn) minn = x;
            sum+=x;
        }
        return (sum - minn*nums.size());
        //Instead of increaing n-1 least elements by 1, we'll decrease the largest number by 1
    }
};

int main()
{
    vector<int> nums= {1,2,3};
    Solution object;
    cout << object.minMoves(nums);
    return 69;
}