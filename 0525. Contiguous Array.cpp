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
    int findMaxLength(vector<int>& nums)
    {
        map<int, int> M;
        M[0] = -1;
        int maxx = 0, sum=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            nums[i] ? sum++ : sum--;
            if(M.find(sum)!=M.end())
                maxx = max(maxx, i-M[sum]);
            else M[sum] = i;
        }
        return maxx;
    }
};

int main()
{
    Solution object;
    
    return 69;
}