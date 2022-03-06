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
    long long factorial[505];
    long long mod(long long n)
    {
        int m = 1e9+7;
        return (n % m + m)%m;
    }
    void populate_factorial(int n)
    {
        factorial[0] = 1;
        factorial[1] = 1;
        for(int i=2; i<=n; i++)
            factorial[i] = mod(mod(factorial[i-1])* i);
    }
public:
    int countOrders(int n) {
        vector<long long> dp(505);
        populate_factorial(n);
        dp[1] = 1;
        for(int i=2; i<=n; i++)
            dp[i] = mod(mod(dp[i-1]) * mod(2*i-1));
        return mod(mod(dp[n])* mod(factorial[n]));
    }
};

int main()
{
    Solution object;
    
    return 69;
}