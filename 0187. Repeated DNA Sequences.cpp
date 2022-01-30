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
    vector<string> findRepeatedDnaSequences(string s)
    {
        vector<string> S;
        unordered_map<string, int> M;
        if(s.length()>=10)
        {
            for(int i=0; i<s.length()-9; i++)
            {
                string str = s.substr(i, 10);
                M[str]++;
                if(M[str]  == 2)
                    S.push_back(str);
            }
        }
        return S;
    }
};

int main()
{
    
    return 69;
}