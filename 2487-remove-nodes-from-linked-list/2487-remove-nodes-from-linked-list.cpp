class Solution {
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        while(head)
        {
            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        int maxx = INT_MIN;
        ListNode *Head = NULL, *prev = NULL;
        while(head)
        {
            if(!prev) prev = Head = head;
            else
            {
                if(head->val >= maxx)
                {
                    prev->next = head;
                    prev = head;
                }
            }
            maxx = max(maxx, head->val);
            head = head->next;
        }
        prev->next = NULL;
        return reverse(Head);
    }
};