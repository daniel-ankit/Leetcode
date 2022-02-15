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
    bool static start(vector<int> &A, vector<int> &B)
    {
        return A[1] < B[1];
    }
    bool carPooling(vector<vector<int>>& trips, int capacity)
    {
        sort(trips.begin(), trips.end(), start);
        int D[1001] = {0};
        for(auto i : trips)
        {
            if(i[0]>capacity) return 0;
            for(int j=i[1]; j<i[2]; j++)
            {
                D[j] += i[0];
                if(D[j]>capacity) return 0;
            }
        }
        return 1;
    }
};

int main()
{
    Solution object;
    
    return 69;
}