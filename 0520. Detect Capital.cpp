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
    bool detectCapitalUse(string word)
    {
        if(word.length()==1) return 1;
        if(word[0]>='A' && word[0]<='Z')
        {
            if(word[1]>='A' && word[1]<='Z')
            {
                for(int i=2; i<word.length(); i++)
                    if(word[i]>='a' && word[i]<='z') return 0;
                return 1;
            }
            else
            {
                for(int i=2; i<word.length(); i++)
                    if(word[i]>='A' && word[i]<='Z') return 0;
                return 1;
            }
                
        }
        else
        {
            for(int i=1; i<word.length(); i++)
                if(word[i]>='A' && word[i]<='Z') return 0;
            return 1;
        }
    }
};

int main()
{
    string S = "FlaG";
    Solution object;
    cout << object.detectCapitalUse(S);
    return 69;
}