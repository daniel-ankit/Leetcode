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
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        vector <int> C;
        for(int i=0; i<nums.size(); i++)
        {
            count=0;
            for(int j=0; j<nums.size(); j++)
                if(nums[i]>nums[j]) count++;
            C.push_back(count);
        }
        return C;
    }
};

int main()
{
    Solution object;
    
    return 69;
}