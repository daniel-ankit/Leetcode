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
    bool hasCycle(ListNode *head)
    {
        if(head==NULL) return 0;
        if(head->next==head) return 1;
        map<ListNode*, int> S;
        while(head!=NULL)
        {
            if(S[head]!=0) return 1;
            S[head]++;
            head = head->next;
        }
        return 0;
    }
    bool hasCycle2(ListNode *head)
    {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return 0;
        ListNode *p = head, *q = head; 
        while(p and q and q->next)
        {
            p = p->next;
            q = q->next->next;
            if(p==q) return 1;
        }
        return 0;
    }
};


int main()
{
    
    return 69;
}