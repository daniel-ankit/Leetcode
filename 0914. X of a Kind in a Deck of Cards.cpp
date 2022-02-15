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
    bool hasGroupsSizeX(vector<int>& deck)
    {
        map<int, int> M;;
        for(auto x:deck) M[x]++;
        int GDC = M[deck[0]];
        for(auto x:M) GDC = __gcd(GDC, x.second);  
        return(GDC!=1);
    }
};

int main()
{
    Solution object;
    
    return 69;
}