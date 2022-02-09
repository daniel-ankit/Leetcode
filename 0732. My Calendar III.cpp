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

class MyCalendarThree {
    map<int, int> M;
public:
    MyCalendarThree(){}
    
    int book(int start, int end)
    {
        int maxx = INT_MIN, current = 0;
        M[start]++;
        M[end]--;
        for(auto x:M)
        {
            current += x.second;
            maxx = max(maxx, current);
        }

        return maxx;
    }
};

int main()
{
    MyCalendarThree object;
    
    return 69;
}