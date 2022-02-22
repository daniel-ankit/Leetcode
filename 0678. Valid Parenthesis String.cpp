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
    bool checkValidString(string s) {
        stack<int> opening, stars;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                opening.push(i);
            else if(s[i]==')')
            {
                if(!opening.empty())
                    opening.pop();
                else if(!stars.empty())
                    stars.pop();
                else return 0;
            }
            else stars.push(i);
        }
        while(!opening.empty() && !stars.empty())
        {
            if(opening.top() > stars.top())
                return 0;
            opening.pop();
            stars.pop();
        }
        return (opening.size()<=stars.size());
    }
};

int main()
{
    Solution object;
    
    return 69;
}