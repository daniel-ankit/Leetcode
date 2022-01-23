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
    int countbit(int n)
    {
        int count=0;
        while(n)
        {
            if(n%2) count++;
            n/=2;
        }
        return count;
    }
    vector<int> countBits(int n)
    {
        vector<int> DP(n+1, 0);
        for(int i=1; i<=n; i++)
            DP[i] = DP[i/2] + i%2;
        return DP;
    }
};
int main()
{
    Solution object;
    object.countBits(69);
    return 69;
}