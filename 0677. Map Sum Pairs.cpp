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

class MapSum {
public:
    map<string, int> M;
    MapSum(){}
    
    void insert(string key, int val)
    {
        M[key]=val;
    }
    
    int sum(string prefix)
    {
        int size = prefix.length();
        int ans=0;
        for(auto x : M)
        {
            if(x.first.substr(0, size)==prefix)
                ans += x.second;
        }
        return ans;
    }
};

int main()
{
    
    return 69;
}