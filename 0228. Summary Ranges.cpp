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
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()!=0)
        {
            int prev = nums[0], last = nums[0];
            for(int i=1; i<nums.size(); i++)
            {
                if((long long)nums[i]-(long long)prev!=1)
                {
                    if (prev==last) ans.push_back(to_string(last));
                    else ans.push_back(to_string(last) + "->" + to_string(prev));
                    prev = last = nums[i];
                }
                else prev = nums[i];
            }
            if (prev==last) ans.push_back(to_string(last));
            else ans.push_back(to_string(last) + "->" + to_string(prev));
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}