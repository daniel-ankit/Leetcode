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

int DP[301][5001] = {0};

class Solution {
public:
    int change(int amount, vector<int>& coins)
    {
        int n = coins.size();
        for(int i=0; i<=n; i++) DP[i][0] = 1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=amount; j++)
            {
                if(coins[i-1]<=j)
                    DP[i][j] = DP[i][j-coins[i-1]] + DP[i-1][j];
                else DP[i][j] = DP[i-1][j];
            }
        }
        return DP[n][amount];
    }
};

int main()
{
    vector<int> V = {1, 2, 5};
    Solution object;
    cout << object.change(5, V);
    return 69;
}