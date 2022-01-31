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
    vector<int> sortArray(vector<int>& nums)
    {
        int A[100001] = {0};
        for(int i=0; i<nums.size(); i++)
            A[nums[i]+50000]++;
        int j=0;
        for(int i=0; i<100000; i++)
        {
            if(A[i]>0)
                while(A[i]--) nums[j++] = i-50000;
        }
        return nums;
    }
};

int main()
{
    Solution object;
    return 69;
}