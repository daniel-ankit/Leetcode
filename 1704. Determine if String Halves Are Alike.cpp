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

bool isvowel(char C)
{
    if (C=='a' || C=='e' || C=='i' || C=='o' || C=='u' || C=='A' || C=='E' || C=='I' || C=='O' || C=='U')
        return true;
    return false;
}

class Solution {
public:
    bool halvesAreAlike(string s)
    {
        int C1=0, C2=0, N= s.length();
        for(int i=0; i<N/2; i++)
            if(isvowel(s[i])) C1++;
        for(int i=N/2; i<N; i++)
            if(isvowel(s[i])) C2++;
        return (C1==C2);
    }
};

int main()
{
    return 69;
}