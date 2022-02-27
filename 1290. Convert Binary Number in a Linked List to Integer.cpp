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
    int getDecimalValue(ListNode* head) {
        string S= "";
        while(head)
        {
            S += head->val+'0';
            head = head->next;
        }
        reverse(S.begin(), S.end());
        int ans = 0;
        for(int i=0; i<S.length(); i++)
            ans += (S[i]-'0')*pow(2,i);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}