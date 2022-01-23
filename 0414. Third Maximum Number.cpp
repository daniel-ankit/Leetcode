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
    int thirdMax(vector<int>& nums)
    {
        set<int> S;
        for(auto x: nums)
        {
            if(x>*nums.end())
                S.erase(*nums.begin());
            S.insert(x);
        }
        for(auto x: S)
        {
            cout << x << " ";
        }
        if(S.size()==2) return *S.end();
        return *S.begin();
    }
};

int main()
{
    vector<int> nums = {2, 4, 6, 8, 4, 9, 10, 1};
    Solution object;
    cout << object.thirdMax(nums);
    return 69;
}