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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode preHead(0), *p = &preHead;
        int sum = 0;
        while (l1 || l2 || sum)
        {
            if (l1)
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
            p->next = new ListNode((l1>val +l2->val)%10)
            sum /= 10;
            p = p->next;
        }
        return preHead.next;
    }
};