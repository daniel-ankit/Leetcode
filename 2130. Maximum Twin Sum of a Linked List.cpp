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
    int pairSum(ListNode* head)
    {
        vector<int> V;
        while(head)
        {
            V.push_back(head->val);
            head = head->next;
        }
        int maxx = INT_MIN;
        int i=0, j = V.size()-1;
        while(i<j)
        {
            int sum = V[i++]+V[j--];
            maxx = max(maxx, sum);
        }
        return maxx;
    }
};

int main()
{
    
    return 69;
}