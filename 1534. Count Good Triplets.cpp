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
    int countGoodTriplets(vector<int>& arr, int a, int b, int c)
    {
        int count=0;
        for(int i=0; i<arr.size()-2; i++)
        {
            for(int j=i+1; j<arr.size()-1; j++)
            {
                if(abs(arr[i]-arr[j])<=a)
                {
                    for(int k=j+1; k<arr.size(); k++)
                        if(abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution object;
    
    return 69;
}