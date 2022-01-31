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
    bool asteroidsDestroyed(int mass, vector<int>& asteroids)
    {
        long long M = mass;
        sort(asteroids.begin(), asteroids.end());
        for(int i=0; i<asteroids.size(); i++)
        {
            if(M>=asteroids[i]) M+=asteroids[i];
            else return 0;
        }
        return 1;
    }
};

int main()
{
    Solution object;
    return 69;
}