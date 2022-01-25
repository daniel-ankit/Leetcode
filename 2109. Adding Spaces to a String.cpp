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
    string addSpaces(string s, vector<int>& spaces)
    {
        string S;
        int j=0;
        for(int i=0; i<s.size(); i++)
        {
            if(j<spaces.size() && i==spaces[j])
            {
                S+=' ';
                j++;
            }
            S+=s[i];
        }
        return S;
    }
};

int main()
{
    string s = "LeetcodeHelpsMeLearn";
    vector<int> spaces = {8,13,15};
    Solution object;
    cout << object.addSpaces(s, spaces);
    return 69;
}