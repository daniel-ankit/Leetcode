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

class MyCalendar {
    vector<pair<int, int>> M;
public:
    MyCalendar(){}
    bool book(int start, int end)
    {
        for(auto x:M)
            if(!(end <= x.first || start >= x.second)) return 0;
        
        M.push_back({start, end});
        return 1;
    }
};

int main()
{
    
    return 69;
}