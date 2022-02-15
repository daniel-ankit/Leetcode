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
    void trim(string &s)
    {
        while(s[s.size()-1]==' ') s.pop_back();
        reverse(s.begin(), s.end());
        while(s[s.size()-1]==' ') s.pop_back();
        reverse(s.begin(), s.end());
    }
public:
    string reverseWords(string s)
    {
        stack<string> S;
        trim(s);
        string word = "";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                if(word!="") S.push(word);
                word = "";
            }
            else word+=s[i];
        }
        S.push(word);
        word = "";
        while(!S.empty())
        {
            word+=(S.top()+" ");
            S.pop();
        }
        word.pop_back();
        return word;
    }
};

int main()
{
    Solution object;
    
    return 69;
}