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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        while(head!=NULL && head->val==val)
            head = head->next;
        if(head==NULL || head->next==NULL) return head;
        ListNode* p = head;
        ListNode* q = head->next;
        while(q!=NULL)
        {
            if(q->val == val)
            {
                p->next = q->next;
                delete(q);
                q = p->next;
            }
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        return head;
    }
};



int main()
{
    Solution object;
    
    return 69;
}