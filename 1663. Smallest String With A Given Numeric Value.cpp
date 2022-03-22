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
    string getSmallestString(int n, int k) {
        string ans= "";
        for(int i=0; i<n; i++)
            ans += 'a';
        k = k - n;
        for(int i=n-1; i>=0; i--)
        {
            if(k>=25)
            {
                k-=25;
                ans[i] = 'z';
            }
            else
            {
                ans[i]+=k;
                k = 0;
            }
            if(k==0) break; 
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}