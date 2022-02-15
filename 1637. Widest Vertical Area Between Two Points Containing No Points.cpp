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
    int maxWidthOfVerticalArea(vector<vector<int>>& points)
    {
        vector<int> x;
        int ans = INT_MIN;
        for(auto i:points)
            x.push_back(i[0]);
        sort(x.begin(), x.end());
        for(int i=0; i<x.size()-1; i++)
            ans = max(x[i+1]-x[i], ans);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}