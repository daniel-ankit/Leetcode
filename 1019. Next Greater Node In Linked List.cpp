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
    vector<int> nextLargerNodes(ListNode* head)
    {
        vector<int> V, ans;
        while(head)
        {
            ListNode* next = head->next;
            while(next)
            {
                if(next->val>head->val)
                {
                    ans.push_back(next->val);
                    break;
                }
                next = next->next;
            }
            if(next==NULL) ans.push_back(0);
            head = head->next;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}