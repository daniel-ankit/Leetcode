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
    bool canMeasureWater(int c1, int c2, int t)
    {
        if(c1+c2==t || abs(c1-c2)==t || c1==t || c2==t) return 1;
        if(c1+c2<t) return 0;
        return (t%__gcd(c1, c2)==0);
    }
};

int main()
{
    Solution object;
    
    return 69;
}