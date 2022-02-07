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
    vector<vector<int>> groupThePeople(vector<int>& groupSizes)
    {
        map<int,vector<int>> M;
        for(int i =0; i< groupSizes.size(); i++)
            M[groupSizes[i]].push_back(i);
        vector<vector<int>> V;
        for(auto x:M)
        {
            int i=0;
            while(i<x.second.size())
            {
                vector<int> now;
                for(int j=0; j<x.first; j++)
                    now.push_back(x.second[i++]);
                V.push_back(now);
            }
        }
        return V;
    }
};
int main()
{
    Solution object;
    
    return 69;
}