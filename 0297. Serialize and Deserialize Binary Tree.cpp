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

class Codec {
public:
    string serialize(TreeNode* root)
    {
        string S = "";
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty())
        {
            TreeNode* now = Q.front();
            Q.pop();
            if(now==NULL) S += "#,";
            else {
                S += to_string(now->val) + ',';
                Q.push(now->left);
                Q.push(now->right);
            }
        }
        // cout << S;
        return S;
    }
    TreeNode* deserialize(string data)
    {
        if(data=="#,") return NULL;
        string temp = "";
        int i = 0;
        while(data[i]!=',')
            temp += data[i++];
        i++;
        TreeNode* node = new TreeNode(stoll(temp)), *head = node;
        temp.clear();
        queue<TreeNode*> Q;
        Q.push(node);
        while(!Q.empty())
        {
            TreeNode* now = Q.front();
            Q.pop();
            while(data[i]!=',')
                temp+=data[i++];
            i++;
            if(temp == "#")
                now->left = NULL;
            else
            {
                node = new TreeNode(stoll(temp));
                now->left = node;
                Q.push(node);
            }
            temp.clear();
            while(data[i]!=',')
                temp+=data[i++];
            i++;
            if(temp == "#")
                now->right = NULL;
            else
            {
                node = new TreeNode(stoll(temp));
                now->right = node;
                Q.push(node);
            }
            temp.clear();
        }
        return head;
    }
};

int main()
{
    Codec object;
    
    return 69;
}