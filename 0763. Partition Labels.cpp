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
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char, int> M;
        for(int i=0; i<s.size(); i++) M[s[i]] = i;
        int start=0, end=0;
        for(int i=0;i<s.size();i++)
        {
            end = max(end, M[s[i]]);  
            if(i==end)
            {
              ans.push_back(end-start+1);
              start = i+1;
            }  
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}