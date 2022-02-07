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
    int wateringPlants(vector<int>& plants, int capacity)
    {
        int step = 0, present = capacity;
        for(int i=0; i<plants.size(); i++)
        {
            if(plants[i]<=present)
            {
                step++;
                present -= plants[i];
            }
            else
            {
                step += 2*i;
                step++;
                present = capacity-plants[i];
            }
            cout << step <<" ";
        }
        return step;
    }
};

int main()
{
    Solution object;
    
    return 69;
}