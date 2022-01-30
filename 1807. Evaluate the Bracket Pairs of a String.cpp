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
    string evaluate(string s, vector<vector<string>>& knowledge)
    {
        map<string,string> keys;
        for(auto x:knowledge)
            keys[x[0]] = x[1];
        
        string khojo = "", ans;
        bool searching = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' && searching==0)
                searching = 1;
            else if(s[i]==')' && searching)
            {
                searching = 0;
                if(keys[khojo]!="")
                    ans+=keys[khojo];
                else ans+='?';
                khojo = "";
            }
            else if(searching==1) khojo+=s[i];
            else ans+=s[i];
        }
        return ans;
    }
};

int main()
{
    
    return 69;
}