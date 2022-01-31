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
    string sortSentence(string s)
    {
        vector<pair<int, string>> V;
        string S = "";
        int num = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                V.push_back({num, S});
                S.clear();
                num = 0;
                continue;
            }
            if(s[i]>='0' && s[i]<='9') num+=(s[i]-'0');
            else S+=s[i];
        }
        V.push_back({num, S});
        sort(V.begin(), V.end());
        string ans = "";
        for(auto x:V)
            ans+= (x.second+" ");
        ans.pop_back();
        return ans;
    }
};

int main()
{
    return 69;
}