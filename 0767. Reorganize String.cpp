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
    string reorganizeString(string s) {
        int M[26] = {0};
        for(auto x:s)
            M[x-'a']++;
        int maxx = 0;
        char maxxalpha;
        int maxxat;
        for(int i=0; i<26; i++)
        {
            if(M[i]>maxx)
            {
                maxx = M[i];
                maxxalpha = i + 'a';
                maxxat = i;
            }
        }
        if(maxx*2 > s.size()+1) return "";
        M[maxxat] = 0;
        int i = 0;
        while(maxx--)
        {
            s[i] = maxxalpha;
            i+=2;
        }
        for(int j=0; j<26; j++)
        {
            while(M[j]--)
            {
                if(i>=s.size())
                    i = 1;
                s[i] = j + 'a';
                i+=2;
            }
        } 
        return s;
        
    }
};

int main()
{
    Solution object;
    
    return 69;
}