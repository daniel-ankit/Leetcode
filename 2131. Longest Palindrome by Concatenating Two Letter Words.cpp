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
    int longestPalindrome(vector<string>& words)
    {
        map<string, int> M;
        int ans = 0;
        bool same = 0;
        for(auto x:words) M[x]++;
        for(auto x:M)
        {
            string S = "";
            S += x.first[1];
            S += x.first[0];
            if(x.first==S)
            {
                if(x.second%2==0) ans+=x.second*2;
                else
                {
                    if(!same)
                    {
                        ans += x.second*2;
                        same = 1;
                    }
                    else ans += (x.second-1)*2;
                }
            }
            else if(M[S]) ans += min(M[S], M[x.first])*2;
            // cout << ans << " ";
        }
        return ans;
    }
};


int main()
{
    Solution object;
    
    return 69;
}