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
    int addRungs(vector<int>& nums, int dist) {
        int now = 0, ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]-now > dist)
            {
                if((nums[i]-now)%dist==0) ans += (nums[i]-now)/dist-1;
                else ans+= (nums[i]-now)/dist;
            }
            now = nums[i];
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}