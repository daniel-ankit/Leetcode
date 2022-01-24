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
    void sortColors(vector<int>& nums)
    {
        int A[3] = {0};
        for(auto x: nums) A[x]++;
        int j=0;
        for(int i=0; i<3; i++)
            while(A[i]--) nums[j++] = i;
    }
};

int main()
{
    vector<int> V = {2,0,2,1,1,0};
    Solution object;
    object.sortColors(V);
    return 69;
}