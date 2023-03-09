class Solution {
    bool exist(ListNode* head, int k)
    {
        while(head && k)
        {
            head = head->next;
            k--;
        }
        return k==0;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        if(!exist(head, k)) return head;
        
        ListNode* curr = head, *prev = NULL, *next = head, *first = head;
        for(int i=0; i<k; i++)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        first->next = reverseKGroup(next, k);
        return head;
    }
};
