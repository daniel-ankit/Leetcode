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
    vector<int> majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        map<int, int> M;
        for(auto x : nums) M[x]++;
        vector<int> V;
        for(auto x : M)
        {
            if(x.second>n/3)
            V.push_back(x.first);
        }
        return V;
    }
};

int main()
{
    vector<int> V = {2, 4, 6, 8, 9, 1, 10};
    Solution object;
    V = object.majorityElement(V);
    return 69;
}