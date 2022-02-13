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
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> V;
        int maxx = pow(2, nums.size());
        while(maxx--)
        {
            vector<int> temp;
            int num = maxx, i=0;
            while(num)
            {
                if(num%2) temp.push_back(nums[i]);
                i++;
                num/=2;
            }
            V.push_back(temp);
        }
        return V;
    }
};

int main()
{
    Solution object;
    
    return 69;
}