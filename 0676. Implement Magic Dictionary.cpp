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

class MagicDictionary {
public:
    vector<string> S;
    MagicDictionary()
    {
        S.clear();
    }
    
    void buildDict(vector<string> dictionary)
    {
        for(auto x : dictionary)
        {
            S.push_back(x);
            cout << x << " ";
        }
    }
    
    bool search(string searchWord)
    {
        for(auto x:S)
        {
            if(searchWord.size()!=x.size()) continue;
            int diff = 0;
            for(int i=0; i<searchWord.length() && diff<=1; i++)
                if(searchWord[i]!=x[i]) diff++;
            if(diff==1) return 1;
        }
        return 0;
    }
};

int main()
{
    
    return 69;
}