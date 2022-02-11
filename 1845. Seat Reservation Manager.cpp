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

class SeatManager {
    priority_queue<int, vector<int>, greater<int>> Q;
public:
    SeatManager(int n) {
        for(int i=1; i<=n; i++)
            Q.push(i);
    }
    
    int reserve() {
        int seat = Q.top();
        Q.pop();
        return seat;
    }
    
    void unreserve(int seatNumber) {
        Q.push(seatNumber);
    }
};

int main()
{
    SeatManager object(10);
    
    return 69;
}