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
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> A(n, vector<int>(n));
        int left = 0, right = n-1, top = 0, bottom = n-1;
        int direction = 0;
        int i=1;

        while(i<=n*n)
        {
            if(direction==0)
            {
                for(int j=left; j<=right; j++)
                    A[top][j] = i++;
                top++;
            }
            else if(direction==1)
            {
                for(int j=top; j<=bottom; j++)
                    A[j][right] = i++;
                right--;
            }
            else if(direction==2)
            {
                for(int j=right; j>=left; j--)
                    A[bottom][j] = i++;
                bottom--;
            }
            else
            {
                for(int j=bottom; j>=top; j--)
                    A[j][left] = i++;
                left++;
            }
            direction++;
            direction%=4;
        }
        return A;
    }
};

int main()
{
    int n = 4;
    Solution object;
    vector<vector<int>> A = object.generateMatrix(n);
    return 69;
}