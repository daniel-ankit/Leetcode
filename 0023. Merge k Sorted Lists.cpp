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

bool cmp(ListNode* a, ListNode *b)
{
    return (a->val < b->val);
}

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        vector<ListNode*> pointers;
        for(auto x:lists)
        {
            while(x)
            {
                pointers.push_back(x);
                x = x->next;
            }
        }
        sort(pointers.begin(), pointers.end(), cmp);
        
        int n = pointers.size();
        if(n==0) return NULL;
        ListNode *head = pointers[0];
        for(int i=0; i<n-1; i++)
            pointers[i]->next = pointers[i+1];
        pointers[n-1]->next = NULL;
        return head;
    }
};

int main()
{
    Solution object;
    
    return 69;
}