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
    int evalRPN(vector<string>& tokens)
    {
        stack<int> S;
        for(auto x:tokens)
        {
            if(x == "/" || x == "+" || x == "*" || x == "-")
            {
                int num1, num2;
                num2 = S.top(), S.pop();
                num1 = S.top(), S.pop();
                if(x=="+") S.push(num1+num2);
                else if(x=="-") S.push(num1-num2);
                else if(x=="*") S.push(num1*num2);
                else S.push(num1/num2);
            }
            else S.push(stoi(x));
        }
        return S.top();
    }
};
int main()
{
    vector<string> S = {"2","1","+","3","*"};
    Solution object;
    cout << object.evalRPN(S);
    return 69;
}