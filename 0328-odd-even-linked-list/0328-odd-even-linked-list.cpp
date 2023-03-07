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