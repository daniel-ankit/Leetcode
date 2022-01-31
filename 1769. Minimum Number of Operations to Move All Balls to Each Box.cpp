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
    vector<int> minOperations(string boxes)
    {
        vector <int> V;
        for(int i=0; i<boxes.length(); i++)
        {
            int count=0;
            for(int j=0; j<boxes.length(); j++)
            {
                if(i==j) continue;
                if(boxes[j]=='1')
                    count += abs(j-i);
            }
            V.push_back(count);
        }
        return V;
    }
};

int main()
{
    return 69;
}