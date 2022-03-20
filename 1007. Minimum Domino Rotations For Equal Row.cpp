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
    int count(vector<int> &A, vector<int> &B, int x)
    {
        int countA = 0, countB = 0, total = 0;
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]==x || B[i]==x) total++;
            if(A[i]==x) countA++;
            if(B[i]==x) countB++;
        }
        if(total!=A.size()) return -1;
        return min(total-countA, total-countB);
    }
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int movesup = count(tops, bottoms, tops[0]);
        return movesup == -1 ? count(tops, bottoms, bottoms[0]) : movesup;
    }
};

int main()
{
    Solution object;
    
    return 69;
}