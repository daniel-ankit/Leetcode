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
    bool isPowerOfTwo(int n)
    {
        if(n==0) return false;
        long long int comp;
        for(int i=-32; i<=32; i++)
        {
            comp = pow(2, i);
            if(n==comp) return true;
        }
        return false;
    }
};

int main()
{
    int num = 69;
    Solution object;
    cout << object.isPowerOfTwo(num);
    return 69;
}