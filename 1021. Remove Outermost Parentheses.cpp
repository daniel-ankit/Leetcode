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
    string removeOuterParentheses(string s) {
        if(s.size()==0)return s;
        stack<char>st;
        int i=0;
        string res="";
        while(i<s.size())
        {
            st.push('(');
            i++;
            while(i<s.size())
            {
                if(s[i]=='(') st.push('(');
                else if(s[i]==')') st.pop();
                if(!st.empty()) res+=s[i];
                if(st.empty()) break;
                i++;
            }
        }
        return res;
    }
};
int main()
{
    Solution object;
    
    return 69;
}