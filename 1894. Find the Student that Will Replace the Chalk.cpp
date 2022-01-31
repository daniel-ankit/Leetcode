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
    int chalkReplacer(vector<int>& chalk, int k)
    {
        unsigned long long sum = 0;
        for(auto x : chalk)
            sum+=x;
        k%=sum;
        for(int i=0; i<chalk.size(); i++)
        {
            if(k>=chalk[i])
                k-=chalk[i];
            else return i;
        }
        return 0;
    }
};

int main()
{
    Solution object;
    
    return 69;
}