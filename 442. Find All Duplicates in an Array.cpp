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
    vector<int> findDuplicates(vector<int>& nums)
    {
        int M[100001] = {0};
        vector<int> V;
        for(auto x : nums)
        {
            M[x]++;
            if(M[x]==2) V.push_back(x);
        }
        return V;
    }
};

int main()
{
    vector<int> V = {4,3,2,7,8,2,3,1};
    Solution object;
    V = object.findDuplicates(V);
    return 69;
}