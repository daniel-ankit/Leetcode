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


// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger {
  public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};


class NestedIterator {
    vector<int> V;
    int it = 0;
    void Push_Back(vector<NestedInteger> &nestedList)
    {
        for(int i=0; i<nestedList.size(); i++)
        {
            auto x = nestedList[i];
            if(x.isInteger()) V.push_back(x.getInteger());
            else Push_Back(x.getList());
        }
    }
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        Push_Back(nestedList);
    }
    
    int next() {
        return V[it++];
    }
    
    bool hasNext() {
        return it<V.size();
    }
};

int main()
{

    return 69;
}