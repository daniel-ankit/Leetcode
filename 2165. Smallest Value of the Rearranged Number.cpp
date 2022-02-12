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
    long long smallestNumber(long long num)
    {
        if(num==0) return 0;
        string S = to_string(num);
        if(S[0]=='-')
        {
            S.erase(S.begin());
            sort(S.begin(), S.end(), greater<char>());
            return -(stoll(S));
        }
        sort(S.begin(), S.end());
        if(S[0]=='0')
        {
            for(int i=1; i<S.length(); i++)
            {
                if(S[i]!='0')
                {
                    swap(S[0], S[i]);
                    break;
                }
            }
        }
        return stoll(S);
    }
};

int main()
{
    Solution object;
    
    return 69;
}