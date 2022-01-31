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
    int findJudge(int n, vector<vector<int>>& trust)
    {
        vector<int> A(n+1, 0), B(n+1, 0);
        for(auto x : trust)
        {
            B[x[0]]++;
            A[x[1]]++;
        }
        for(int i=1; i<=n; i++)
            if(A[i]==n-1 && B[i]==0) return i;
        return -1;
    }
};

int main()
{
    Solution object;
    return 69;
}