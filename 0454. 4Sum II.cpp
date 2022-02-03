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
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)
    {
        int n = nums1.size();
        unordered_map<int, int> M;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                M[nums1[i]+nums2[j]]++;
        }
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                ans += M[-(nums3[i]+nums4[j])];
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}