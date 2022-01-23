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

class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode* a = head, *b = head->next;
        while(b->next!=NULL && b->next->next!=NULL)
        {
            swap(a->val, b->val);
            a = a->next->next;
            b = b->next->next;
        }
        swap(a->val, b->val);
        return head;
    }
};

int main()
{
    
    return 69;
}