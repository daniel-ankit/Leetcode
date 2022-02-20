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
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
    void flat(Node* head, vector<Node*> &V)
    {
        if(head==NULL) return;
        V.push_back(head);
        if(head->child)
            flat(head->child, V);
        flat(head->next, V);
        
    }
public:
    Node* flatten(Node* head) {
        if((head==NULL) || (head->next==NULL && head->prev==NULL && head->child==NULL)) return head;
        vector<Node*> V;
        flat(head, V);
        V[0]->next = V[1];
        V[0]->prev = NULL;
        V[0]->child = NULL;
        for(int i=1; i<V.size()-1; i++)
        {
            V[i]->prev = V[i-1];
            V[i]->next = V[i+1];
            V[i]->child = NULL;
        }
        V[V.size()-1]->prev = V[V.size()-2];
        V[V.size()-1]->next = NULL;
        V[V.size()-1]->child = NULL;
        return head;
    }
};

int main()
{
    Solution object;
    
    return 69;
}