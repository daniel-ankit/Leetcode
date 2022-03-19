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

class FreqStack {
public:
    vector<stack<int>>nums;
    unordered_map<int,int>depth;
    FreqStack() {
        nums.clear();
    }
    
    void push(int val) {
        if(nums.size()<=depth[val])
            nums.push_back(stack<int>());
        nums[depth[val]].push(val);
        depth[val]++;
    }
    
    int pop() {
        int n=nums.size();
        int top=nums[n-1].top();
        depth[top]--;
        nums[n-1].pop();
        if(!nums[n-1].size())
            nums.pop_back();
        return top;
    }
};

int main()
{
    
    return 69;
}