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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans = NULL, *prev = NULL;
        head = head->next;
        int sum = 0;
        while(head!=NULL)
        {
            sum+=head->val;
            if(head->val==0)
            {
                ListNode* New = new ListNode(sum);
                if(!ans && !prev)
                    ans = prev = New;
                else
                {
                    prev->next = New;
                    prev = New;
                }
                sum = 0;
            }
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