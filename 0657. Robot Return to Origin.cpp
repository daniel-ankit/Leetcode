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
    bool judgeCircle(string moves)
    {
        int x = 0, y = 0;
        for(auto i:moves)
        {
            if(i=='U') y++;
            else if(i=='D') y--;
            else if(i=='L') x--;
            else x++;
        }
        return (x==0 && y==0);
    }
};

int main()
{
    Solution object;
    
    return 69;
}