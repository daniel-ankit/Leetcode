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

struct Node {
    int val;
    Node *left;
    Node *next;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return root;
        
        queue<Node*> Q;
        Q.push(root);
        vector<Node*> V;
        while(!Q.empty())
        {
            V.clear();
            int nodes = Q.size();
            for(int i=0; i<nodes; i++)
            {
                Node* now = Q.front();
                Q.pop();
                if(now->left) Q.push(now->left);
                if(now->right) Q.push(now->right);
                V.push_back(now);
            }
            for(int i=0; i<V.size()-1; i++)
                V[i]->next = V[i+1];
        }
        return root;
    }
};

int main()
{
    Solution object;
    
    return 69;
}