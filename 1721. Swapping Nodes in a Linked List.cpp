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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL || head->next==NULL) return head;
        ListNode* A = head, *B = head, *it = head;
        int nodes = 0;
        k--;
        int i = k;
        while(it)
        {
            if(i==0) A = it;
            nodes++;
            it = it->next;
            i--;
        }
        for(int i=0; i<nodes-k-1; i++)
            B = B->next;
        swap(A->val, B->val);
        return head;
    }
};

int main()
{
    Solution object;
    
    return 69;
}