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
    bool canPartition(vector<int>& nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0), n = nums.size();
        if(sum%2)
            return false;
        sum/=2;
        vector<vector<int>> DP(n+1, (vector<int>(sum+1, -1)));

        for(int i=0; i<=n; i++) DP[i][0] = 1;
        for(int i=1; i<=sum; i++) DP[0][i] = 0;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            if(nums[i-1]<=j)
                DP[i][j] = max(DP[i-1][j-nums[i-1]], DP[i-1][j]);
            else DP[i][j] = DP[i-1][j];
        }
        return DP[n][sum]==1;
        
    }
};

int main()
{
    vector<int> nums = {2, 4, 6, 8, 4, 9, 10, 1};
    Solution object;
    cout << object.canPartition(nums);
    return 69;
}