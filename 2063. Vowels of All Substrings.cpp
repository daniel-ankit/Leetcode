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
    long long countVowels(string word)
    {
        int A[26] = {0};
        long long ans = 0;
            A['a'-'a'] = 1, A['e'-'a'] = 1, A['i'-'a'] = 1, A['o'-'a'] = 1, A['u'-'a'] = 1;
        for(int i=0; i<word.size(); i++)
            if(A[word[i]-'a']) ans += (i-0+1)*(word.size()-i);
        return ans;
    }
};

int main()
{
    
    return 69;
}