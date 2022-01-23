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
  int countSegments(string s)
  {
    if (s == "")
      return 0;
    if(s.length()==1 && s!=" ")
        return 1;
      bool found = false;
      int count=0;
      for(int i=0; i<s.length(); i++)
      {
          if(s[i]==' ' && found)
          {
              count++;
              found = false;
          }
          if(s[i]!=' ') found = true;
      }
      if(found) count++;
      return count;
  }
};

int main()
{
    string S = "Hello, my name is John";
    Solution object;
    cout << object.countSegments(S);
    return 69;
}