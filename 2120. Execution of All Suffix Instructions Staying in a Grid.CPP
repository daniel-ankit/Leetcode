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
    vector<int> executeInstructions(int n, vector<int>& startPos, string s)
    {
        vector<int> V;
        for(int i=0; i<s.length(); i++)
        {
            int x = startPos[1], y = startPos[0], moves = 0;
            for(int j=i; j<s.length(); j++)
            {
                if(s[j]=='R') x++;
                else if(s[j]=='D') y++;
                else if(s[j]=='U') y--;
                else if(s[j]=='L') x--;
                
                if(x >= n || y >=n || x < 0 || y < 0)
                    break;
                else
                    moves++;
            }
            V.push_back(moves);
        }
        return V;
    }
};

int main()
{
    Solution object;
    
    return 69;
}