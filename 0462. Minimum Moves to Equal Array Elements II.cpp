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
    int minMoves2(vector<int>& nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n%2)
        {
            int tomake = nums[n/2];
            int moves = 0;
            for(int i=0; i<n; i++)
                moves += abs(tomake-nums[i]);
            return moves;
        }
        
        int tomake1 = nums[n/2], tomake2 = nums[n/2-1];
        int moves1 = 0, moves2 = 0;
        for(int i=0; i<n; i++)
        {
            moves1 += abs(tomake1-nums[i]);
            moves2 += abs(tomake2-nums[i]);
        }
        return min(moves1, moves2);
    }
};
int main()
{
    vector<int> nums= {1,2,3};
    Solution object;
    cout << object.minMoves2(nums);
    return 69;
}