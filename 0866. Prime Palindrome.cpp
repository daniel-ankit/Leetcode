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
    bool ispalim(int n)
    {
        string num = to_string(n);
        int i=0, j = num.size()-1;
        while(i<j)
            if(num[i++] != num[j--]) return 0;
        return 1;
    }
    bool isprime(int n)
    {
        if(n==1) return 0;
        for(int i=2; i<=sqrt(n); i++)
            if(n%i==0) return 0;
        return 1;
    }
public:
    int primePalindrome(int n)
    {
        for(int i=n; i<10000000; i++)
            if(ispalim(i) && isprime(i)) return i;
        return 100030001;                // Last in the range of [1, INT_MAX]
    }
};

int main()
{
    Solution object;
    
    return 69;
}