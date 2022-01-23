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
    int numJewelsInStones(string jewels, string stones)
    {
        int n=0;
        for(int i=0; i<jewels.size(); i++)
        {
            for(int j=0; j<stones.size(); j++)
                if(jewels[i]==stones[j]) n++;
        }
        return n;
    }
};

int main()
{
    string jewels = "aA", stones = "aAAbbbb";
    Solution object;
    cout << object.numJewelsInStones(jewels, stones);
    return 69;
}