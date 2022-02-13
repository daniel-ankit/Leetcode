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
    int longestPalindrome(string s)
    {
        if(s.size()<2) return s.size();
        sort(s.begin(), s.end());
        int single = 0;
        int maxx = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1] && i!=s.size()-1)
            {
                maxx+=2;
                i++;
            }
            else single = 1;
        }
        return maxx + single;
    }
};

int main()
{
    Solution object;
    
    return 69;
}