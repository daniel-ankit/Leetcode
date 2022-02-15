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
    int maximumWealth(vector<vector<int>>& acc)
    {
        int mx = INT_MIN;
        for(int i=0; i < acc.size(); i++)
        {
            int sum = accumulate(acc[i].begin(), acc[i].end(), 0);
            if(sum > mx) mx=sum;
        }
        return mx;
    }
};


int main()
{
    Solution object;
    
    return 69;
}