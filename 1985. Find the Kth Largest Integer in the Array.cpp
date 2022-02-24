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
    struct comparator {
        bool operator()(string &a, string &b) // a greater than b
        {
            if(a.length()!=b.length())
                return (a.length()>b.length());
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]>b[i]) return 1;
                if(a[i]<b[i]) return 0;
            }
            return 0;
        }
    };
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, comparator> Q;
        for(auto x:nums)
        {
            Q.push(x);
            if(Q.size()>k)
                Q.pop();
        }
        return Q.top();
    }
};

int main()
{
    Solution object;
    
    return 69;
}