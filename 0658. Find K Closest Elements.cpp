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
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        queue<int> Q;
        for(auto i : arr)
        {
            if(Q.size()<k)
                Q.push(i);
            else if(abs(Q.front()-x) > abs(x-i))
            {
                Q.pop();
                Q.push(i);
            }
        }
        vector<int> V;
        while(k--)
        {
            V.push_back(Q.front());
            Q.pop();
        }
        return V;
    }
};

int main()
{
    Solution object;
    return 69;
}