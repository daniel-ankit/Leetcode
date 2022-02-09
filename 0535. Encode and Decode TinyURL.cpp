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
    int i=-1;
    vector<string> M;
public:
    string encode(string longUrl)
    {
        i++;
        M.push_back(longUrl);
        string encrpyt = to_string(i);
        return "http://tinyurl.com/" + encrpyt;
    }

    string decode(string shortUrl)
    {
        string b = "";
        for(int i=shortUrl.size()-1; shortUrl[i]!='/'; i--)
            b += shortUrl[i];
        reverse(b.begin(), b.end());
        int index = stoi(b);
        return M[index];
    }
};

int main()
{
    Solution object;
    
    return 69;
}