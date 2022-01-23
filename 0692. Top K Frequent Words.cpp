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
    static bool cmp(pair<string,int>a,pair<string,int>b){
    if(a.second != b.second) return a.second>b.second;
    int i = 0,j = 0;
        while(i<a.first.size() && j<b.first.size()){
            if(a.first[i] != b.first[j]) return a.first[i]<b.first[j];
            i++;
            j++;
        }
        return a.first.size()<b.first.size();
    }
    vector<string> topKFrequent(vector<string>& words, int k)
    {
        unordered_map<string, int> M;
        for(auto x : words)
            M[x]++;
        
        vector<pair<string, int>> V;
        for(auto x : M) V.push_back({x.first, x.second});
        sort(V.begin(), V.end(), cmp);
        
        vector<string> A;
        for(int i=0; i<k; i++) A.push_back(V[i].first);
        return A;
    }
};

int main()
{
    
    return 69;
}