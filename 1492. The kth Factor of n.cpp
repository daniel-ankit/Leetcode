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
    vector<int> V;
    void factors(int n)
    {
        V.clear();
        for(int i=1; i<=n; i++)
            if(n%i==0) V.push_back(i);
    }
public:
    int kthFactor(int n, int k) {
        factors(n);
        if(k<=V.size()) return V[k-1];
        return -1;
    }
};

int main()
{
    Solution object;
    
    return 69;
}