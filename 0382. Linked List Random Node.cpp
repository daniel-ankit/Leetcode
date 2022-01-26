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
    int size = 0;
    ListNode* StoreHead = NULL;
    Solution(ListNode* head)
    {
        StoreHead = head;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            size++;
            temp = temp->next;
        }
    }
    
    int getRandom()
    {
        if(size==0) return INT_MAX;
        int random = rand()%size;
        ListNode* temp = StoreHead;
        for(int i=0; i<random; i++)
            temp = temp->next;
        return temp->val;
    }
};


int main()
{
    
    return 69;
}