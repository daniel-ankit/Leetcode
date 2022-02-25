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
    bool isValid(string s) {
        string str = "";
        for(auto x:s)
        {
            if(x=='a') str += 'a';
            else if(x=='b')
            {
                if(str.size()>=1 && str[str.size()-1]=='a') str+='b';
                else return 0;
            }
            else if(x=='c')
            {
                if(str.size()>=2 && str[str.size()-1]=='b' && str[str.size()-2]=='a')
                {
                    str.pop_back();
                    str.pop_back();
                }
                else return 0;
            }
            else return 0;
        }
        // cout << str;
        return str=="";
    }
};

int main()
{
    Solution object;
    
    return 69;
}