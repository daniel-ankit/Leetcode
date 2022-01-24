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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head==NULL || head->next == NULL) return head;
        ListNode* h = head;
        int nodes=0;
        // map<int, int> M;
        int A[201] = {0};
        while(h)
        {
            A[(h->val)+100]++;
            h = h->next;
            nodes++;
        }
        h = head;
        ListNode* prev = NULL;
        int uniques=0;
        for(int i=0; i<201; i++)
        {
            if(A[i]==1)
            {
                if(prev==NULL) prev = h;
                else prev = prev->next;
                h->val = i-100;
                    h = h->next;
                uniques++;
            }
        }
        if(h==head) return NULL;
        if(uniques==nodes) return head;
        prev->next = NULL;
        return head;
    }
};

int main()
{
    
    return 69;
}