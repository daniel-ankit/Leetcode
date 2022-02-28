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
    int arrayNesting(vector<int>& nums) {
        unordered_set<int> V;
        int maxx = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(V.count(nums[i])!=0) continue;
            int result = nums[i];
            int size = 0;
            while(V.count(result)==0)
            {
                V.insert(result);
                size++;
                result = nums[result];
            }
            maxx = max(maxx, size);
        }
        return maxx;
    }
};

int main()
{
    Solution object;
    
    return 69;
}