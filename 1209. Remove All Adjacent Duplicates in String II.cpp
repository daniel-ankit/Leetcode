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
    string removeDuplicates(string s, int k)
    {
        stack<pair<char, int>> S;
        S.push({s[0], 1});
        for(int i=1; i<s.size(); i++)
        {
            if(!S.empty() && S.top().first == s[i]) S.top().second++;
            else S.push({s[i], 1});
            if(!S.empty() && S.top().second == k) S.pop();
        }
        string ans = "";
        while(!S.empty())
        {
            while(S.top().second--)
                ans += S.top().first;
            S.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}