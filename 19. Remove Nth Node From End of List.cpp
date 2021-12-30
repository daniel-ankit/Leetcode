/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if(head->next==NULL) return NULL;  //  Deleting the only node
        if(head->next->next==NULL)  
        {
            if(n==1) head->next = NULL;  //  Deleting first of two nodes
            else head = head->next;      //  Deleting second of two nodes
            return head;
        }
        int l = 0;
        ListNode* h = head;
        while(h)
        {
            l++;
            h = h->next;
        }
        if(l==n)  //  Deleting First Node, (i.e.) nth node form the last.
        {
            head = head->next;
            return head;
        }
        h = head;
        l = l-n-1;  
        while(l--)
            h = h->next;
        h->next = h->next->next;  //  Deleting nth node from the last
        return head;   
    }
};