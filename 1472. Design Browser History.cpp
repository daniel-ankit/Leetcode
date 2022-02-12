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

class Listnode{
    public:
    string val;
    Listnode *prev, *next;
    Listnode(string s)
    {
        val = s;
        next = prev = NULL;
    }
};

class BrowserHistory {
public:
    Listnode *front, *rear;
    BrowserHistory(string homepage) {
        front = new Listnode(homepage);
        rear = front;
    }
    
    void visit(string url) {
        Listnode *node = new Listnode(url);
        rear->next = node;
        node->prev = rear;
        rear = rear->next;
    }
    
    string back(int steps) {
        for(int i=0; i<steps; i++)
        {
            if(!rear->prev) break;
            rear = rear->prev;
        }
        return rear->val;
    }
    
    string forward(int steps) {
        for(int i=0; i<steps; i++)
        {
            if(!rear->next) break;
            rear = rear->next;
        }
        return rear->val;
    }
};


int main()
{
    
    
    return 69;
}