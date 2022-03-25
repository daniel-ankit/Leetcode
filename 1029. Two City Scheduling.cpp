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

bool cmp(vector<int>& x , vector<int>& y)
{
    return (x[0] - x[1] < y[0] - y[1]);
}

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
       int n = costs.size();
       sort(costs.begin() , costs.end() , cmp); 
       int cost = 0;
       for(int i = 0 ; i < n / 2 ; i++)
       {
            cost += costs[i][0];
            cost += costs[n - i - 1][1];
       }
       return cost;
    }
};

int main()
{
    Solution object;
    
    return 69;
}