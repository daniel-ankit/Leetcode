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
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t)
    {
        vector<pair<long long,int>> V;
        for(int i=0; i<nums.size(); i++) V.push_back({nums[i],i});
        sort(V.begin(), V.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                if(abs(V[j].first-V[i].first)<=t)
                {
                    if(abs(V[j].second-V[i].second)<=k)
                    return 1;
                }
                else break;
            }
        }
        return 0;
    }
};

int main()
{
    Solution object;
    
    return 69;
}