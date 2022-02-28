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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second>b.second;
}

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        map<int, int> M;
        for(auto x:barcodes)
            M[x]++;
        vector<pair<int, int>> A;
        for(auto x:M)
            A.push_back({x.first, x.second});
        sort(A.begin(), A.end(), cmp);
        int i=0;
        for(auto x:A)
        {
            while(x.second--)
            {
                barcodes[i] = x.first;
                i+=2;
                if(i>=barcodes.size()) i=1;
            }
        }
        return barcodes;
    }
};

int main()
{
    Solution object;
    
    return 69;
}