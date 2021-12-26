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
    ListNode* sortList(ListNode* head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode* H = head;
        vector <int> V;
        while(H!=NULL)
        {
            V.push_back(H->val);
            // cout << H->val;
            H = H->next;
        }
        sort(V.begin(), V.end());
        H = head;
        int i=0;
        while(H!=NULL)
        {
            H->val = V[i++];
            H=H->next;
        }
        return head;
    }
};