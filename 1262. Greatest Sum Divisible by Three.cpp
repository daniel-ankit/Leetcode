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
    int maxSumDivThree(vector<int>& nums)
    {
        vector<int> div2, div1;
        long long int sum = 0;
        for(auto x:nums)
        {
            if(x%3==1) div1.push_back(x);
            if(x%3==2) div2.push_back(x);
            sum+=x;
        }
        sort(div1.begin(), div1.end());
        sort(div2.begin(), div2.end());
        if(sum%3==1)
        {
            if(div2.size()>=2 && div1.size()>=1)
                return sum - min(div1[0], div2[0]+div2[1]);    
            if(div2.size()<=1)
                return sum-div1[0];
            return sum-div2[0]-div2[1];
        }
        if(sum%3==2)
        {
            if(div1.size()>=2 && div2.size()>=1)
                return sum - min(div2[0], div1[0]+div1[1]);
            if(div1.size()<=1)
                return sum-div2[0];
            return sum-div1[0]-div1[1];
        }
        return sum;
    }
};

int main()
{
    vector<int> nums = {1,2,3,4,4};
    Solution object;
    cout << object.maxSumDivThree(nums);
    return 69;
}