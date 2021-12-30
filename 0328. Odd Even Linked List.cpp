#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next = NULL;
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head)
    {
        if(!head || !head->next) return head;
        bool even=1;
        ListNode* ptr = head;
        vector<int> E, O;
        while(ptr!=NULL)
        {
            (even) ? (E.push_back(ptr->val)) : (O.push_back(ptr->val));
            even = !even;
            ptr = ptr->next;
        }
        ptr = head;
        for(auto x : E)
        {
            ptr->val = x;
            ptr = ptr->next;
        }
        for(auto x : O)
        {
            ptr->val = x;
            ptr = ptr->next;
        }
        return head;
    }
};

void print(ListNode *head)
{
    while(head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    return;
}

int main()
{
    ListNode* HEAD = NULL, *C1, *C2, *C3, *C4, *C5;
    C1 = new ListNode;
    C2 = new ListNode;
    C3 = new ListNode;
    C4 = new ListNode;
    C5 = new ListNode;
    HEAD = C1;
    C1->next = C2;
    C2->next = C3;
    C3->next = C4;
    C4->next = C5;
    C5->next = NULL;

    C1->val = 1;
    C2->val = 2;
    C3->val = 3;
    C4->val = 4;
    C5->val = 5;

    print(HEAD);

    Solution O;
    O.oddEvenList(HEAD);

    print(HEAD);
    return 69;
}