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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> less, equal_greater;
        ListNode *h = head; 
        while(h)
        {
            if(h->val<x) less.push_back(h->val);
            else equal_greater.push_back(h->val);
            h = h->next;
        }
        h = head;
        for(int i=0; i<less.size(); i++)
        {
            h->val = less[i];
            h = h->next;
        }
        for(int i=0; i<equal_greater.size(); i++)
        {
            h->val = equal_greater[i];
            h = h->next;
        }
        return head;
    }
};

int main()
{
    
    return 69;
}