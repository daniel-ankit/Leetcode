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
    ListNode *detectCycle(ListNode *head)
    {
        if(head==NULL || head->next==NULL || head->next->next == NULL) return NULL;
        if (head->next->next == head) return head;
        ListNode *p = head, *q = head;
        while(p and q and q->next)
        {
            p = p->next;
            q=q->next->next;
            if(p==q)
            {
                p=head;
                while(p!=q)
                {
                    p = p->next;
                    q = q->next;
                }
                return p;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head)
    {
        if(head==NULL || head->next==NULL) return NULL;
        map<ListNode*, int> M;
        ListNode* ptr = head;
        while(ptr)
        {
            if(M[ptr]!=0) return ptr;
            M[ptr]++;
            ptr = ptr->next;
        }
        return NULL;
    }
};

int main()
{
    
    return 69;
}