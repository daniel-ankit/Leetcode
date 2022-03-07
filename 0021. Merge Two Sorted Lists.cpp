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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* List1 = list1;
        while(List1->next)
            List1 = List1->next;
        List1->next = list2;
        List1 = list1;
        vector<int> nums;
        while(List1)
        {
            nums.push_back(List1->val);
            List1 = List1->next;
        }
        sort(nums.begin(), nums.end());
        List1 = list1;
        int i=0;
        while(List1)
        {
            List1->val = nums[i++];
            List1 = List1->next;
        }
        return list1;
    };
    
};

int main()
{
    Solution object;
    
    return 69;
}