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
    int firstBadVersion(int n)
    {
        int i=1, j =n;
        while(i<j)
        {
            int m = i+(j-i)/2;
            if(isBadVersion(m)) j = m;
            else i = m+1;
        }
        return i;
    }
};


int main()
{
    int num = 69;
    Solution object;
    cout << object.firstBadVersion(num);
    return 69;
}