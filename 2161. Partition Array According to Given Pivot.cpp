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
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lesser, greater;
        int pivots=0;
        for(auto x:nums)
        {
            if(x>pivot) greater.push_back(x);
            else if(x==pivot) pivots++;
            else lesser.push_back(x);
        }
        while(pivots--)
            lesser.push_back(pivot);
        for(auto x:greater)
            lesser.push_back(x);
        return lesser;
    }
};

int main()
{
    Solution object;
    
    return 69;
}