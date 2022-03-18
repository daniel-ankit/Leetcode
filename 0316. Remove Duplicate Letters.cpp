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
    string removeDuplicateLetters(string s) {
        if(s.length()==1) return s;
        int last[26];
        bool visited[26] = {0};
        for(int i=0; i<s.size(); i++)
            last[s[i]-'a'] = i;
        stack<char> S;
        for(int i=0; i<s.size(); i++)
        {
            if(visited[s[i]-'a']) continue;
            while(!S.empty() && S.top()>s[i] && last[S.top()-'a']>i)
            {
                visited[S.top()-'a'] = 0;
                S.pop();
            }
            visited[s[i]-'a'] = 1;
            S.push(s[i]);
        }
        string ans = "";
        while(!S.empty())
        {
            ans += S.top();
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