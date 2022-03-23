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
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<pair<int, int>, int> M;
        long long ans = 0;
        for(auto x: rectangles)
        {
            int lcm = __gcd(x[0], x[1]);
            pair<int, int> curr = {x[0]/lcm, x[1]/lcm};
            if(M[curr]) ans+=M[curr];
            M[curr]++;
        }
        return ans;
    }
};

int main()
{
    Solution object;
    
    return 69;
}