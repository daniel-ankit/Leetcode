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
    vector<string> fizzBuzz(int n) {
        vector <string> S;
        for(int i=1; i<=n; i++)
        {
            if(i%3==0 && i%5==0)
            {
                S.push_back("FizzBuzz");
                continue;
            }
            if(i%3==0)
            {
                S.push_back("Fizz");
                continue;
            }
            if(i%5==0)
            {
                S.push_back("Buzz");
                continue;
            }
            else
            {
                string s = to_string(i);
                S.push_back(s);
            }
        }
        return S;
    }
};

int main()
{
    int num = 69;
    Solution object;
    vector<string> S = object.fizzBuzz(num);
    return 69;
}