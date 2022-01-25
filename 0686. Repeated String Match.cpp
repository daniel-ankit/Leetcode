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
    int repeatedStringMatch(string a, string b)
    {
        int A[26] = {0};
        for(auto x:a) A[x-'a']=1;
        for(auto x:b) if(!A[x-'a']) return -1;
        
        int times = b.length()/a.length();
        string S="";
        for(int i=0; i<times; i++)
            S += a;
        
        for(int i=0; i<3; i++)
        {
            if(S.find(b)!=string::npos) return times;
            S+=a;
            times++;
        }
        return -1;
    }
};


int main()
{
    Solution object;
    cout << object.repeatedStringMatch("abcd", "cdabcdab");
    return 69;
}