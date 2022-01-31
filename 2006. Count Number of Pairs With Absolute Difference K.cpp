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
    int countKDifference(vector<int>& nums, int k) 
    {
        int V[101];
        memset(V, 0, sizeof(V));
        for(int i=0; i<nums.size(); i++)
            V[nums[i]]++;
        int ans=0;
        for(int i=0; i<101-k; i++)
            ans+=V[i]*V[i+k];
        return ans;
    }
};

int main()
{
    Solution object;
    return 69;
}