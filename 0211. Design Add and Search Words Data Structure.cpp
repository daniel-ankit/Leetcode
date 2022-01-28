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

class WordDictionary {
public:
    map<int, vector<string>> V;
    WordDictionary() {
        V.clear();
    }
    
    void addWord(string word)
    {
        V[word.size()].push_back(word);
    }
    
    bool search(string word)
    {
        for(auto x:V[word.length()])
        {
            if(x.length()!=word.length()) continue;
            bool same = 1;
            for(int i=0; i<x.length(); i++)
            {
                if(x[i]!=word[i] && word[i]!='.')
                {
                    same=0;
                    break;
                }
            }
            if(same) return 1;
        }
        return 0;
    }
};

int main()
{
    
    return 69;
}