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
    vector<int> V;
    Solution(vector<int>& nums)
    {
        V = nums;
    }
    
    int pick(int target)
    {
        vector<int> index;
        for(int i=0; i<V.size(); i++)
            if(V[i]==target) index.push_back(i);
        return index[rand()%index.size()];
    }
};

int main()
{
    
    return 69;
}