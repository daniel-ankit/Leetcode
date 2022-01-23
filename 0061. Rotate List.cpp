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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head == NULL || head->next == NULL || k==0) return head;
        ListNode* last = head;
        int nodes = 1;
        while(last->next!=NULL)
        {
            nodes++;
            last = last->next;
        }
        k = k % nodes;
        if(k==0) return head;
        k = nodes-k-1;
        cout << k;
        ListNode* ptr2 = head->next, *ptr = head;;
        while(k--)
        {
            ptr = ptr->next; 
            ptr2 = ptr2->next;
        }
        ptr->next = NULL;
        last->next = head;
        head =  ptr2;
        return head;
    }
};

int main()
{
    
    return 69;
}