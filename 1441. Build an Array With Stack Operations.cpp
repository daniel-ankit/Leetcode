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
    vector<string> buildArray(vector<int>& target, int n)
    {
        vector<string> S;
        for(int i=1, j=0; i<=n; i++)
        {
            if(target[j]==i)
            {
                S.push_back("Push");
                j++;
                if(j==target.size()) break;
            }
            else
            {
                S.push_back("Push");
                S.push_back("Pop");
            }
        }
        return S;
    }
};

int main()
{
    Solution object;
    
    return 69;
}