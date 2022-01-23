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

class Solution
{
public:
  bool isSubsequence(string s, string t)
  {
    deque<int> S, T;
    for(int i=0; i<t.length(); i++)
      T.push_back(t[i]);
    for(int i=0; i<s.length(); i++)
      S.push_back(s[i]);
    while(!S.empty() && !T.empty())
    {
      if(S.front()==T.front())
      {
        S.pop_front();
        T.pop_front();
      }
      else T.pop_front();
    }
    return S.empty();
  }
};

int main()
{
    string s = "abc", t = "ahbgdc";
    Solution object;
    cout << object.isSubsequence(s, t);
    return 69;
}