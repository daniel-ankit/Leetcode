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
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++)
        {
        if(s[i]>='A'&& s[i]<='Z')
            s[i]+= 32;
        }
        return s;
    }
};

int main()
{
    string S = "I am IronMan";
    Solution object;
    cout << object.toLowerCase(S);
    return 69;
}