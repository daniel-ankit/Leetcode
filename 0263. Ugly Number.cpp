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
    bool isUgly(int n)
    {
        if(n==0) return 0;
        while(n%2==0 || n%3==0 || n%5==0)
        {
            if(n%2==0) n/=2;
            else if (n%3==0) n/=3;
            else n/=5;
        }
        return (n==1);
    }
};

int main()
{
    int num = 69;
    Solution object;
    cout << object.isUgly(num);
    return 69;
}