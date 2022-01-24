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
    int getSum(int a, int b)
    {
        if(b>0)
            while(b!=0)
                a++, b--;
        if(b<0)
            while(b!=0)
                a--, b++;
        return a;
        // return plus()(a, b);
        // return (a+b);
    }
};

int main()
{
    Solution object;
    cout << object.getSum(2, 5);
    return 69;
}