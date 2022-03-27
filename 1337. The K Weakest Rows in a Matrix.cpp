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
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> v;
        for(int i=0; i<mat.size(); i++)
        {
            int num = 0; 
            for(int j=0; j<mat[i].size(); j++)
                if(mat[i][j]) num++;
            v.push_back({num, i});
        }
        sort(v.begin(), v.end(), cmp);
        vector<int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(v[i].second);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}