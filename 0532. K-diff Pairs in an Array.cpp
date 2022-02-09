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
    int findPairs(vector<int>& nums, int k)
    {
        map<int, int> M;
        int ans=0;
        for(auto x:nums) M[x]++;
        for(auto x:M)
        {
            if(k==0 && x.second>=2) ans++;
            if(k!=0 && M[x.first-k]) ans++;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}