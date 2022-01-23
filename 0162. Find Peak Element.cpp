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
    int findPeakElement(vector<int>& nums)
    {
        int maxx = nums[0], index=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>maxx)
            {
                maxx = nums[i];
                index=i;
            }
        }
        return index;
    }
};

int main()
{
    vector<int> V = {2, 4, 5, 3, 9, 1, 0, 5};
    Solution object;
    cout << object.findPeakElement(V);
    return 69;
}