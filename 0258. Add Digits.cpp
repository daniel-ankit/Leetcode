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
    int add(int num)
    {
        int ans = 0;
        while(num)
        {
            ans+=num%10;
            num/=10;
        }
        return ans;
    }
public:
    int addDigits(int num)
    {
        while(num>9) num = add(num);
        return num;
    }
};
int main()
{
    Solution object;
    
    return 69;
}