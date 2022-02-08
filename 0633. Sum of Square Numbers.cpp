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
    bool judgeSquareSum(int c)
    {
        int i=0, j = sqrt(c);
        while(i<=j)
        {
            long long x = (long long)i*i + (long long)j*j;
            if(x==c) return 1;
            (x > c) ? (j--) : (i++);
        }
        return 0;
    }
};

int main()
{
    Solution object;
    
    return 69;
}