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
int finalValueAfterOperations(vector<string>& operations)
    {
        int M=0, N=operations.size();
        for(int i=0; i<N; i++)
        {
            if(operations[i]=="X++" or operations[i]=="++X") M++;
            if(operations[i]=="X--" or operations[i]=="--X") M--;     
        }
        return M;
    }
};

int main()
{
    Solution object;
    return 69;
}