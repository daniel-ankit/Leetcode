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
public:
    vector<vector<int>> levelOrder(Node* root)
    {
        vector<vector<int>> V;
        if(root == NULL) return V;
        queue<Node*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            int nodes = Q.size();
            vector<int> level;
            for(int i=0; i<nodes; i++)
            {
                Node* now = Q.front();
                Q.pop();
                level.push_back(now->val);
                int node = now->children.size();
                for(int j=0; j<node; j++)
                    Q.push(now->children[j]);
            }
            V.push_back(level);
        }
        return V;
    }
};

int main()
{
    Solution object;
    
    return 69;
}