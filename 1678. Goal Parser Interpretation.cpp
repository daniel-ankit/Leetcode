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
    string interpret(string command)
    {
        string S = "";
        for(int i=0; i<command.length();)
        {
            if(command[i]=='G')
            {
                S+='G';
                i++;
                continue;
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                S+='o';
                i+=2;
                continue;
            }
            else if(command[i]=='(' && command[i+1]=='a')
            {
                S+="al";
                i+=4;
                continue;
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