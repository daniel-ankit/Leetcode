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

int DP[13][10005];
class Solution {
public:
    int coinChange(vector<int>& coins, int amount)
    {
        int n = coins.size();
        for(int i=1; i<=n; i++) DP[i][0] = 0;
        for(int i=0; i<=amount; i++) DP[0][i] = INT_MAX-1;
        for(int i=1; i<=amount; i++)
        {
            if(i%coins[0]==0) DP[1][i] = i/coins[0];
            else DP[1][i] = INT_MAX-1;
        }
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=amount; j++)
            {
                if(coins[i-1]<=j)
                    DP[i][j] = min(1+DP[i][j-coins[i-1]], DP[i-1][j]);
                else DP[i][j] = DP[i-1][j];
            }
        }
        return (DP[n][amount]==INT_MAX-1) ? (-1) : (DP[n][amount]);
    }
};

int main()
{
    
    return 69;
}