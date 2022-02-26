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
    bool canConstruct(string s, int k) {
        if(k>s.length()) return 0;
        int odds = 0;
        map<char, int> M;
        for(auto x:s) M[x]++;
        for(auto x:M)
            if(x.second%2) odds++;
        return odds<=k ? 1 : 0;
    }
};

int main()
{
    Solution object;
    
    return 69;
}