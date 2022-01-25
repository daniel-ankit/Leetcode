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
    int numSteps(string s)
    {
        int moves = 0;
        while(s.length()!=1)
        {
            char last = s[s.length()-1], second = s[s.length()-2];
            
            if(last=='1' && second=='0')
                swap(s[s.length()-1], s[s.length()-2]);
            
            else if(last=='1' && second=='1')
            {
                bool found_zero = 0;
                for(int j=s.size()-1; j>=1; j--)
                {
                    if(s[j]=='1') s[j]='0';
                    else if(s[j]=='0')
                    {
                        found_zero = 1;
                        s[j] = '1';
                        break;
                    }
                }
                if(!found_zero)
                    s.push_back('0');
            }
            
            else s.pop_back();
            moves++;
        }
        return moves;
    }
};

int main()
{
    Solution object;
    cout << object.numSteps("1101");
    return 69;
}