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
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return node;
        else if(node->neighbors.size()==0)
        {
            Node* New = new Node(node->val);
            return New;
        }
        Node* head = node;
        map<Node*, vector<int>> M;
        map<Node*, bool> visited;
        queue<Node*> Q;
        Q.push(node);
        while(!Q.empty())
        {
            auto now = Q.front();
            Q.pop();
            if(!visited[now])
            {
                for(int i=0; i<now->neighbors.size(); i++)
                {
                    M[now].push_back(now->neighbors[i]->val);
                    Q.push(now->neighbors[i]);
                }
                visited[now] = 1;
            }
        }
        vector<Node*> nodes(visited.size()+1);
        for(auto x:M)
        {
            Node* New = new Node (x.first->val);
            nodes[x.first->val] = New;
        }
        head = nodes[head->val];
        for(auto x : M)
        {
            cout << x.first->val << " : ";
            for(auto y : x.second)
            {
                nodes[x.first->val]->neighbors.push_back(nodes[y]);
                cout << y << " ";
            }
            cout << endl;
        }
        return nodes[node->val];
    }
};

int main()
{
    Solution object;
    
    return 69;
}