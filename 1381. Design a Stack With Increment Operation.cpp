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

int SIZE = 1001;
class CustomStack {
public:
    int array[1001];
    int top = -1;
    int size = 0;
    CustomStack(int maxSize)
    {
        size = maxSize;
    }
    
    void push(int x)
    {
        if(top==size-1) return;
        array[++top] = x;
    }
    
    int pop()
    {
        int save = -1;
        if(top>=0)
        {
            save = array[top];
            top--;
        }
        return save;
    }
    
    void increment(int k, int val)
    {
        for(int i=0; i<k; i++) array[i]+=val;
    }
};

int main()
{
    
    return 69;
}