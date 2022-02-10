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
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        if(k==0 || k==1) return 0;
        int ans = 0;
        unsigned long long product = 1;
        queue<int> Q;
        for(int i=0; i<nums.size(); i++)
        {
            product*=nums[i];
            Q.push(nums[i]);
            while(product>=k)
            {
                product/=Q.front();
                Q.pop();
            }
            ans += Q.size();
            
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}