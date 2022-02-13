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
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
    {
        int ans = 0, n = grid.size();
        for(int i=0; i<n; i++)
        {
            int Rmax = *max_element(grid[i].begin(), grid[i].end());
            for(int j=0; j<n; j++)
            {
                int Cmax = INT_MIN;
                for(int k=0; k<n; k++)
                    Cmax = max(grid[k][j], Cmax);
                ans += abs(min(Rmax,Cmax)-grid[i][j]);
            }
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}