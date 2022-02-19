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
    string minRemoveToMakeValid(string s)
    {
        string S = "";
        int open = 0, close = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(') open++;
            if(s[i]==')')
            {
                if(!open) continue;
                else open--;
            }
            S+=s[i];
        }
        reverse(S.begin(), S.end());
        string ans = "";
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]==')') close++;
            if(S[i]=='(')
            {
                if(!close) continue;
                else close--;
            }
            ans+=S[i];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}