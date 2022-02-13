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
    vector<Node*> children;
    Node() {}
    Node(int _val) {val = _val;}
    Node(int _val, vector<Node*> _children) {val = _val;children = _children;}
};

class Solution {
    void preorder(vector<int> &ans, Node* root)
    {
        if(root==NULL) return;
        ans.push_back(root->val);
        for(int i=0; i < root->children.size(); i++)
            preorder(ans, root->children[i]);
    }
public:
    vector<int> preorder(Node* root)
    {
        vector<int> V;
        preorder(V, root);
        return V;
    }
};

int main()
{
    Solution object;
    
    return 69;
}