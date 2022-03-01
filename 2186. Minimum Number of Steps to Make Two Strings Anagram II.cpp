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
    int minSteps(string s, string t) {
        int count[26] = {0}, ans = 0;
        for(auto x:s)
            count[x-'a']++;
        for(auto x:t)
            count[x-'a']--;
        for(int i=0; i<26; i++)
            ans += abs(count[i]);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}