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
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> temp = deck;
        sort(deck.begin(), deck.end());
        queue<int> Q;
        for(int i=0; i<deck.size(); i++)
            Q.push(i);
        for(int i=0; i<deck.size(); i++)
        {
            if(!Q.empty())
            {
                temp[Q.front()] = deck[i];
                Q.pop();
                Q.push(Q.front());
                Q.pop();
            }
        }
        return temp;
    }
};

int main()
{
    Solution object;
    
    return 69;
}