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
    string truncateSentence(string s, int k)
    {
        string S = "";
        int count=0, i=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
                count++;
            if(k==count) break;
            S+=s[i];
        }
        return S;
    }
};

int main()
{
    
    return 69;
}