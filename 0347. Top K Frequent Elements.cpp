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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return (a.second>b.second);
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int, int> M;
        vector<pair<int, int>> V;
        vector<int> A;
        
        for(auto x:nums)
            M[x]++;
        
        for(auto x:M)
            V.push_back(make_pair(x.first, x.second));
        sort(V.begin(), V.end(), cmp);
            

        for(int i=0; i<k; i++)
            A.push_back(V[i].first);
        return A;
    }
};

int main()
{
    vector<int> V = {1,1,1,2,2,3};
    Solution object;
    V = object.topKFrequent(V, 2);
    return 69;
}