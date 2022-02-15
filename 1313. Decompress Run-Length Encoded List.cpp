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
    vector<int> decompressRLElist(vector<int>& nums)
    {
        vector <int> ans;
        for(int i=0; i<nums.size()-1; i=i+2)
        {
            int X = nums[i], Y = nums[i+1];
            while(X--)
                ans.push_back(Y);
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}