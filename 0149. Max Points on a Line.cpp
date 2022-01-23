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
    int maxPoints(vector<vector<int>>& points)
    {
        map<double, int> M;
        int ans=0;
        for(int i=0; i<points.size(); i++)
        {
            M.clear();
            for(int j=0; j<points.size(); j++)
            {
                if(i==j) continue;
                double slope = (double)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
                M[slope]++;
                ans = max(ans, M[slope]);
            }
        }
        ans++;
        return ans;
    }
};

int main()
{
    
    return 69;
}