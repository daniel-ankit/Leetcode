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

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
    map<Node*, Node*> A2B, B2A;
public:
    Node* copyRandomList(Node* head) {
        Node* ptr = head, *dummy = NULL, *prev = NULL;
        while(ptr!=NULL)
        {
            Node* New = new Node(ptr->val);
            if(dummy == NULL && prev == NULL)
                dummy = prev = New;
            else
            {
                prev->next = New;
                prev = prev->next;
            }
            A2B[New] = ptr;
            B2A[ptr] = New;
            ptr = ptr->next;
        }
        ptr = dummy;
        while(ptr)
        {
            ptr->random = B2A[A2B[ptr]->random];
            ptr = ptr->next;
        }
        return dummy;
    }
};

int main()
{
    Solution object;
    
    return 69;
}