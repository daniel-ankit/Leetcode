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
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector <bool> ans;
        int MAX = INT_MIN;
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]>MAX)
            MAX=candies[i];
        }
        for(int i=0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies>=MAX)
                ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}