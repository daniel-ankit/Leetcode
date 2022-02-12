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
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> temp;
        for(int i=1; i<nums.size(); i+=2)
            temp.push_back(nums[i]);
        sort(temp.begin(), temp.end(), greater<int>());
        int j=0;
        for(int i=1; i<nums.size(); i+=2)
            nums[i] = temp[j++];
        
        temp.clear();
        for(int i=0; i<nums.size(); i+=2)
            temp.push_back(nums[i]);
        sort(temp.begin(), temp.end());
        j=0;
        for(int i=0; i<nums.size(); i+=2)
            nums[i] = temp[j++];
        
        return nums;
    }
};

int main()
{
    Solution object;
    
    return 69;
}