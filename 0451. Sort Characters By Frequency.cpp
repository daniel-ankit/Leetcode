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
    static bool cmp(pair<char, int>&a, pair<char, int>&b)
    {
        return (a.second>b.second);
    }
    string frequencySort(string s)
    {
        map<char,int> M;
        for(int i=0; i<s.length(); i++)
            M[s[i]]++;
        
        vector<pair<char, int>> V;
        for(auto x : M)
            V.push_back({x.first, x.second});
        sort(V.begin(), V.end(), cmp);
        
        string S = "";
        for(auto x:V)
        {
            while(x.second--)
            S.push_back(x.first);
        }
        return S;
    }
};

int main()
{
    string S = "I am Ironman!";
    Solution object;
    cout << object.frequencySort(S);
    return 69;
}