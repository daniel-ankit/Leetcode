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
    string stringify(ListNode* head)
    {
        string S = "";
        while(head)
        {
            S+=(head->val + '0');
            head = head->next;
        }
        return S;
    }
    ListNode* Listify(string &s)
    {
        ListNode *head = NULL, *prev = NULL;
        for(int i=0; i<s.size(); i++)
        {
            ListNode* New = new ListNode(s[i]-'0');
            if(head==NULL && prev == NULL)
                head = prev = New;
            else
            {
                prev->next = New;
                prev = prev->next;
            }
        }
        return head;
    }
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string S1 = stringify(l1), S2 = stringify(l2);
        if(S2.length()>S1.length()) swap(S1, S2);
        int diff = S1.length()-S2.length();
        reverse(S1.begin(), S1.end());
        reverse(S2.begin(), S2.end());
        while(diff--)
            S2 += '0';
        int carry = 0;
        // cout << S1 << " " << S2;
        for(int i=0; i<S1.size(); i++)
        {
            int num1 = S1[i] - '0';
            int num2 = S2[i] - '0';
            S1[i] = (num1+num2+carry)%10 + '0';
            if(num1+num2+carry>=10)
                carry = 1;
            else carry = 0;
        }
        if(carry==1)
            S1+='1';
        // cout << S1;
        reverse(S1.begin(), S1.end());
        ListNode* head = Listify(S1);
        return head;
    }
};

int main()
{
    Solution object;
    
    return 69;
}