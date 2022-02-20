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
    vector<int> V;
    int sum = 0;
public:
    Solution(vector<int>& w)
    {
        for(int i=0; i<w.size(); i++)
        {
            sum += w[i];
            V.push_back(sum);
        }
    }
    
    int pickIndex() {
        return upper_bound(V.begin(), V.end(), rand()%sum) - V.begin();
    }
};

int main()
{
    Solution object();
    
    return 69;
}