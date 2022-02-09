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
    int numberOfBeams(vector<string>& bank)
    {
        vector<int> V;
        int laser = 0;
        for(int i=0; i<bank.size(); i++)
        {
            laser = 0;
            for(int j=0; j<bank[i].size(); j++)
                if(bank[i][j]=='1') laser++;
            if(laser!=0)V.push_back(laser);
        }
        if(V.size()<2) return 0;
        laser = 0;
        for(int i=0; i<V.size()-1; i++)
            laser += V[i]*V[i+1];
        return laser;
    }
};

int main()
{
    Solution object;
    
    return 69;
}