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
    int fib(int n)
    {
        int DP[31] = {0};
        DP[1] = 1, DP[2] = 1;
        for(int i=3; i<=30; i++)
            DP[i] = DP[i-1]+DP[i-2];
        return DP[n];
    }
};

int main()
{
    Solution object;
    cout << object.fib(5);
    return 69;
}