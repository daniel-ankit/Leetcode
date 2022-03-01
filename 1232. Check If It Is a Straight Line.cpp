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
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float Num = coordinates[1][1] - coordinates[0][1], Den = coordinates[1][0] - coordinates[0][0];
        float Slope = (coordinates[1][0] == coordinates[0][0]) ? (INT_MAX) : (Num/Den);
        for(int i=2; i<coordinates.size(); i++)
        {
            float num = coordinates[i-1][1] - coordinates[i][1], den = coordinates[i-1][0] - coordinates[i][0];
            float slope = (coordinates[i][0] == coordinates[0][0]) ? (INT_MAX) : (num/den);
            if(slope != Slope) return 0;
        }
        return 1;
    }
};

int main()
{
    Solution object;
    
    return 69;
}