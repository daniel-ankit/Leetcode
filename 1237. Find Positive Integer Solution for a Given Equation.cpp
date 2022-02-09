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
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z)
    {
        set<pair<int, int>> S;
        for(int i=1; i<=z; i++)
        {
            for(int j=1; j<=z; j++)
                if(customfunction.f(i, j)==z) S.insert({i,j});
        }
        vector<vector<int>> V;
        for(auto x:S)
            V.push_back({x.first, x.second});
        return V;
    }
};

int main()
{
    Solution object;
    
    return 69;
}