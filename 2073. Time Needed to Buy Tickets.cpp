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
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0, i = 0, n = tickets.size();
        while(tickets[k])
        {
            if(tickets[i]>0)
            {
                tickets[i]--;
                time++;
            }
            i = (i+1)%n;
        }
        return time;
    }
};

int main()
{
    Solution object;
    
    return 69;
}