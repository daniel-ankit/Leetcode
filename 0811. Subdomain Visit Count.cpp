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
    vector<string> subdomainVisits(vector<string>& cpdomains)
    {
        map<string, int> M;
        for(auto x:cpdomains)
        {
            string num = "";
            for(int i=0; x[i]!=' '; i++)
                num += x[i];
            int freq = stoi(num);
            num = "";
            for(int i = x.size()-1; i>=0; i--)
            {
                if(x[i]=='.')
                {
                    reverse(num.begin(), num.end());
                    M[num] += freq;
                    reverse(num.begin(), num.end());
                }
                if(x[i]==' ')
                {
                    reverse(num.begin(), num.end());
                    M[num] += freq;
                    break;
                }
                num+=x[i];
            }
            
        }
        vector<string> ans;
        for(auto x:M)
            ans.push_back(to_string(x.second) + " " + x.first);
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}