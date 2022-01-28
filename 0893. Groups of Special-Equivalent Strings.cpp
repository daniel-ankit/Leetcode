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
    int numSpecialEquivGroups(vector<string>& words)
    {
        unordered_set<string> V;
        for(auto x:words)
        {
            string even = "", odd = "";
            for(int i=0; i<x.size(); i++)
                (i%2==0) ? (even+=x[i]) : (odd+=x[i]);
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());
            V.insert(even+odd);
        }
        return V.size();
    }
};

int main()
{
    vector<string>V ={"abcd","cdab","cbad","xyzz","zzxy","zzyx"};
    Solution object;
    object.numSpecialEquivGroups(V);
    return 69;
}