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
    int findDuplicate(vector<int>& nums)
    {
        int hash[100001] = {0};
        for(auto x : nums)
        {
            hash[x]++;
            if(hash[x]>1) return x;
        }
        return -1;
    }
};

int main()
{
    vector<int> V = {2, 4, 6, 8, 9, 1, 10};
    Solution object;
    object.findDuplicate(V);
    return 69;
}