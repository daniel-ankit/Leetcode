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
    int minimumSum(int num)
    {
        string S = to_string(num);
        sort(S.begin(), S.end());
        int num1 = (S[0]-'0')*10+(S[2]-'0');
        int num2 = (S[1]-'0')*10+(S[3]-'0');
        return (num1+num2);
    }
};

int main()
{
    Solution object;
    
    return 69;
}