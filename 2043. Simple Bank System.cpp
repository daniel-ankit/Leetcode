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

class Bank {
    vector<long long> V;
    bool validindex(int n)
    {
        return (n>=1 && n<=V.size());
    }
public:
    Bank(vector<long long>& balance) {
        V = balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(!validindex(account1) || !validindex(account2) || V[account1-1]<money) return 0;
        V[account1-1]-=money;
        V[account2-1]+=money;
        return 1;
        
    }
    
    bool deposit(int account, long long money) {
        if(!validindex(account)) return 0;
        V[account-1]+=money;
        return 1;
    }
    
    bool withdraw(int account, long long money) {
        if(validindex(account) && V[account-1]>=money)
        {
            V[account-1]-=money;
            return 1;
        }
        return 0;
    }
};

int main()
{
    
    return 69;
}