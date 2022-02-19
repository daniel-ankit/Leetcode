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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        ListNode* ptr = head;
        int nodes = 0;
        while(ptr)
        {
            ptr = ptr->next;
            nodes++;
        }
        ptr = head;
        for(int i=0; i<nodes/2-1; i++)
            ptr = ptr->next;
        ptr->next = ptr->next->next;
        return head;
    }
};

int main()
{
    Solution object;
    
    return 69;
}