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
    int rand7()
    {
        return rand()%7+1;
    }
public:
    int rand10()
    {
        return  (rand7()+rand7()+rand7()+rand7()+rand7()+rand7()+rand7()+rand7()+rand7())%10 + 1;
    }
};

int main()
{
    Solution object;
    cout << object.rand10();
    return 69;
}