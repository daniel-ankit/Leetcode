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
    void reorderList(ListNode* head) {
        vector<int> V;
        ListNode* ptr = head;
        while(ptr)
        {
            V.push_back(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        int i = 0, j = V.size()-1;
        while(i<=j)
        {
            ptr->val = V[i++];
            ptr = ptr->next;
            if(ptr == NULL) break;
            ptr->val = V[j--];
            ptr = ptr->next;
        }
    }
};

int main()
{
    Solution object;
    
    return 69;
}