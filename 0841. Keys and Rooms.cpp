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
    bool canVisitAllRooms(vector<vector<int>>& nums)
    {
        int rooms = nums.size();
        vector<int>visited (rooms, 0);
        queue<int> Q;
        
        visited[0]=1;
        Q.push(0);
        
        while(!Q.empty())
        {
            int now = Q.front();
            Q.pop();
            for(auto x : nums[now])
            {
                if(visited[x]==0)
                {
                    Q.push(x);
                    visited[x] = 1;
                }
            }
        }
        for(int i=0; i<rooms; i++)
            if(visited[i]==0) return 0;
        return 1;
    }
};

int main()
{
    
    return 69;
}