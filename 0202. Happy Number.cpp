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
    
    int add(int N)
    {
        int sum=0;
        while(N)
        {
            sum+=(N%10)*(N%10);
            N/=10;
        }
        return sum;
    }
    
    bool isHappy(int n)
    {
        while(n!=1 && n!=4)
            n = add(n);
        return n==1;
    }
};

int main()
{
    int num=69;
    Solution object;
    cout << object.add(num);
    return 69;
}