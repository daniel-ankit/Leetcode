#include<stdio.h>

struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *prev = NULL, *next = NULL, *current = head;
    while(current !=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

int main()
{
    
    return 69;
}