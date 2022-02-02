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
    int minMoves(int target, int maxDoubles)
    {
        int step=0;
        if(maxDoubles==0) return target-1;
        while(target!=1)
        {
            if(maxDoubles && target%2==0)
            {
                target/=2;
                maxDoubles--;
            }
            else target--;
            step++;
            if(maxDoubles==0) break;
        }
        return step+target-1;
    }
};
int main()
{
    Solution object;
    
    return 69;
}