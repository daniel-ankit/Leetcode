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

class FindSumPairs {
    map<int,int> num2, num1;
    vector<int> V2;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(auto &x:nums2) num2[x]++;
        for(auto &x:nums1) num1[x]++;
        V2 = nums2;
    }
    
    void add(int index, int val) {
        int change = V2[index];
        num2[change]--;
        num2[change+val]++;
        V2[index] = change+val;
    }
    
    int count(int tot){
        int ans = 0;
        for(auto &x:num1)
            ans += x.second*num2[tot-x.first];
        return ans;
    }
};

int main()
{
    return 69;
}