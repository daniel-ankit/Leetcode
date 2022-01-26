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
    int size = 0;
    vector<int> real;
    vector<int> shuffled;
    Solution(vector<int>& nums)
    {
        size = nums.size();
        real = nums;
        shuffled = nums;
    }
    
    vector<int> reset()
    {
        return real;
    }
    
    vector<int> shuffle()
    {
        if(size==1) return real;
        int i = 0;
        while(i < size)
            swap(shuffled[i++], shuffled[rand()%size]);
        return shuffled;
    }
};

int main()
{
    
    return 69;
}