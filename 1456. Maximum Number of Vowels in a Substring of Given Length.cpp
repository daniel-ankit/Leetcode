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
    int maxVowels(string s, int k)
    {
        int curr = 0, maxx = 0;
        bool vowels[26] = {0};
        vowels[0] = vowels[4] = vowels[8] = vowels[14] = vowels[20] = 1;
        for(int i=0; i<k; i++)
            if(vowels[s[i]-'a']) curr++;
        maxx = curr;
        for(int i=1; i<s.length()-k+1; i++)
        {
            if(vowels[s[i-1]-'a'] && !vowels[s[i+k-1]-'a']) curr--;
            if(!vowels[s[i-1]-'a'] && vowels[s[i+k-1]-'a']) curr++;
            maxx = max(curr, maxx);
            if(maxx==k) return k;
        }
        return maxx;
    }
};

int main()
{
    Solution object;
    cout << object.maxVowels("abbcgdferdssaa", 4);
    return 69;
}