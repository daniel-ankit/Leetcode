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
    bool isValidSerialization(string preorder)
    {
        vector<string> S;
        string s = "";
        for(int i=0; i<preorder.size(); i++)
        {
            if(preorder[i]==',')
            {
                S.push_back(s);
                s = "";
                continue;
            }
            s+=preorder[i];
        }
        S.push_back(s);
        for(auto x:S)
            cout << x << " ";
        stack<char> st;
        for(int i=S.size()-1; i>=0; i--)
        {
            if(S[i]=="#") st.push('#');
            else
            {
                if(st.size()>1)
                {
                    st.pop();
                    st.pop();
                    st.push('#');
                }
                else return 0;
            }
        }
        return (st.size()==1 && st.top()=='#');
    }
};

int main()
{
    Solution object;
    
    return 69;
}