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

bool cmp(vector<int> &a, vector<int> &b)
{
    if(a[0]==b[0])
        return a[1] > b[1];   
    return a[0] < b[0];
}

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int first = intervals[0][0], last =  intervals[0][1], count = -1;
        for(auto &x:intervals)
        {
            if (first <= x[0] && last >= x[1]) count++;
            if (last >= x[0] && last <= x[1]) last = x[1];
            if (last < x[0])
            {
                first = x[0];
                last = x[1];
            }
            cout << first << " " << last << endl;
        }
        return intervals.size()-count;
    }
};

int main()
{
    Solution object;
    
    return 69;
}