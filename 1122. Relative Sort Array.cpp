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
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        int A[1001] = {0};
        vector<int> ans;
        for(auto x : arr1) A[x]++;
       
        for(auto x : arr2)
            while(A[x]) ans.push_back(x), A[x]--;
        
        for(int i=0; i<1001; i++)
           while(A[i]) ans.push_back(i), A[i]--;
        
        return ans;
    }
};


int main()
{
    Solution object;
    
    return 69;
}