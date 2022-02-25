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

bool cmp(int &a, int &b)
{
    return abs(a)<abs(b);
}

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        map<int, int> M;
        for(auto x:arr) M[x]++;
        sort(arr.begin(), arr.end(), cmp);
        for(auto x:arr)
        {
            if(M[x]==0) continue;
            if(M[2*x]==0) return 0;
            if(M[2*x]>=M[x])
            {
                M[2*x] -= M[x];
                M[x] = 0;
            }
        }
        for(auto x:M)
            if(x.second) return 0;
        return 1;
    }
};
int main()
{
    Solution object;
    
    return 69;
}