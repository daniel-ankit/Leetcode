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
    ListNode* middleNode(ListNode* head)
    {
        if(head == NULL || head->next == NULL) return head;
        ListNode *slow = head, *fast = head->next;
        int length=0;
        while(slow!=NULL)
        {
            slow = slow->next;
            length++;
        }
        slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        if(length%2) return slow;
        return slow->next;
    }
};