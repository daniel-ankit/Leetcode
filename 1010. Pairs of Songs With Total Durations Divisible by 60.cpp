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
    int numPairsDivisibleBy60(vector<int>& time)
    {
        int count=0;
        int hash[60] = {0};
        for(int i=0; i<time.size(); i++)
            hash[time[i]%60]++;
        count = (hash[0]*(hash[0]-1))/2 + (hash[30]*(hash[30]-1))/2;
        for(int i=1; i<30; i++)
            count += hash[i]*hash[60-i];
        return count;
    }
};

int main()
{
    Solution object;
    return 69;
}