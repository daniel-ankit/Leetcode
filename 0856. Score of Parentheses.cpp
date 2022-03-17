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
    int scoreOfParentheses(string s)
    {
        int depth = 0, ans = 0;
        bool end = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                depth++;
                end = 0;
            }
            if(s[i]==')')
            {
                if(!end)
                {
                    depth--;
                    ans += pow(2, depth);
                }
                else depth--;
                end = 1;
            }
            // cout << ans << " ";
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}