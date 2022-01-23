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
    uint32_t reverseBits(uint32_t n)
    {
        unsigned int ans = 0;
        for(unsigned int i = 0 ; i < 32; i++)
            ans  += ((n & 1 <<i) ? 1 : 0) << (31 - i); 
        return ans;
    }
};

int main()
{
    int num = 25;
    Solution object;
    cout << object.reverseBits(num);
    return 69;
}