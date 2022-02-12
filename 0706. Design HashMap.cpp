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

class MyHashMap {
    int array [1000001];
public:
    MyHashMap() {
        for(int i=0; i<1000001; i++)
            array[i] = -1;
    }
    
    void put(int key, int value) {
        array[key] = value;
    }
    
    int get(int key) {
        return array[key];
    }
    
    void remove(int key) {
        array[key] = -1;
    }
};

int main()
{
    
    return 69;
}
