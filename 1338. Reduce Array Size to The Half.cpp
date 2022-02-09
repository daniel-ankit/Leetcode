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
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> M;
        for(auto x:arr) M[x]++;
        vector<int> V;
        for(auto x:M) V.push_back(x.second);
        sort(V.begin(), V.end(), greater<int>());
        
        int size = arr.size(), i=0;
        for(; i<V.size();i++)
        {
            if(size>arr.size()/2)
                size-=V[i];
            else break;
        }
        return i;
    }
};

int main()
{
    Solution object;
    
    return 69;
}