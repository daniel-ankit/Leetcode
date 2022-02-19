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
    string reverseParentheses(string s) {
        if(s.size()==1) return s;
        stack<char> S;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==')')
            {
                string temp = "";
                while(S.top()!='(')
                {
                    temp+=S.top();
                    S.pop();
                }
                S.pop();
                for(auto x:temp)
                    S.push(x);
                cout << temp << " ";
            }
            else S.push(s[i]);
        }
        string ans = "";
        while(!S.empty())
        {
            ans+=S.top();
            S.pop();
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