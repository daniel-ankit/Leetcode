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
    int minOperations(int n)
    {
        int ans = 0;
        if(n%2==1)
        {
            for(int i=2; i<n; i+=2)
                ans+=i;
        }
        else
        {
            for(int i=1; i<n; i+=2)
                ans+=i;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}