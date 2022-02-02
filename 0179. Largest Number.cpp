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

bool cmp(string a, string b)
{
    return (a+b) > (b+a);
}

class Solution {
public:
    string largestNumber(vector<int>& nums)
    {
        string A[nums.size()];
        for(int i=0; i<nums.size(); i++)
            A[i] = to_string(nums[i]);
        sort(A, A+nums.size(), cmp);
        if(A[0]=="0") return "0";
        string ans = "";
        for(auto x:A)
            ans+=x;
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}