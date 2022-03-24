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
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int, int> M;
        M[0] = 1;
        int rem = 0, ans = 0;
        for(int i=0; i<nums.size(); i++)
        {
            rem = (rem+nums[i]%k+k)%k;
            ans += M[rem];
            M[rem]++;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}