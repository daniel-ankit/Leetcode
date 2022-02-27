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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2)
    {
        ListNode *p = list1, *q = list1;
        for(int i=1; i<a; i++)
        {
            p = p->next;
            q = q->next;
        }
        for(int i=a; i<=b; i++)
            q = q->next;
        p->next = list2;
        while(list2->next)
            list2 = list2->next;
        list2->next = q->next;
        return list1;
    }
};

int main()
{
    Solution object;
    
    return 69;
}