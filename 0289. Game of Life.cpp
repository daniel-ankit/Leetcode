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
    void gameOfLife(vector<vector<int>>& B) {
        int row = B.size();
        int col = B[0].size();
        vector<vector<int>> M = B;
        int P;
        
        if(row==1)
        {
            if(col==1)
            {
                B[0][0] = 0;
                return;
            }
            M[0][0] = 0;
            M[0][col-1] = 0;
            for(int i=1; i<col-1; i++)
                if(B[0][i+1]+B[0][i-1]==0) M[0][i] = 0;
            B.clear();
            B = M;
            return;
        }
        
        if(col==1)
        {
            M[0][0] = 0;
            M[row-1][0] = 0;
            for(int i=1; i<row-1; i++)
                    if(B[i+1][0]+B[i-1][0]==0) M[i][0] = 0;
            B.clear();
            B = M;
            return;
        }
        
        P = B[0][1]+B[1][0]+B[1][1];                                 // Top Left
        if(B[0][0]==1 && (P<2 || P>3)) M[0][0] = 0;
        if(B[0][0]==0 && P==3) M[0][0] = 1;

        P = B[row-1][col-2]+B[row-2][col-1]+B[row-2][col-2];        // Bottom Right
        if(B[row-1][col-1]==1 && (P<2 || P>3)) M[row-1][col-1] = 0;
        if(B[row-1][col-1]==0 && P==3) M[row-1][col-1] = 1;

        P = B[0][col-2]+B[1][col-1]+B[1][col-2];                    // Top Right
        if(B[0][col-1]==1 && (P<2 || P>3)) M[0][col-1] = 0;
        if(B[0][col-1]==0 && P==3) M[0][col-1] = 1;

        P = B[row-2][0]+B[row-1][1]+B[row-2][1];                    // Bottom Left
        if(B[row-1][0]==1 && (P<2 || P>3)) M[row-1][0] = 0;
        if(B[0][col-1]==0 && P==3) M[row-1][0] = 1;
        
        for(int i=1; i<col-1; i++)
        {
            P = B[0][i+1] + B[0][i-1] + B[1][i] + B[1][i+1] + B[1][i-1]; 
            if(B[0][i]==1 && (P<2 || P>3)) M[0][i] = 0;
            if(B[0][i]==0 && P==3) M[0][i] = 1;

            P = B[row-1][i+1] + B[row-1][i-1] + B[row-2][i] + B[row-2][i+1] + B[row-2][i-1]; 
            if(B[row-1][i]==1 && (P<2 || P>3)) M[row-1][i] = 0;
            if(B[row-1][i]==0 && P==3) M[row-1][i] = 1;
        }

        for(int i=1; i<row-1; i++)
        {
            P = B[i+1][0] + B[i-1][0] + B[i+1][1] + B[i-1][1] + B[i][1]; 
            if(B[i][0]==1 && (P<2 || P>3)) M[i][0] = 0;
            if(B[i][0]==0 && P==3) M[i][0] = 1;

            P = B[i+1][col-1] + B[i-1][col-1] + B[i+1][col-2] + B[i-1][col-2] + B[i][col-2]; 
            if(B[i][col-1]==1 && (P<2 || P>3)) M[i][col-1] = 0;
            if(B[i][col-1]==0 && P==3) M[i][col-1] = 1;
        }

        for(int i=1; i<row-1; i++)
        {
            for(int j=1; j<col-1; j++)
            {
                P = B[i-1][j-1]+B[i-1][j]+B[i-1][j+1]+B[i][j-1]+B[i][j+1]+B[i+1][j-1]+B[i+1][j]+B[i+1][j+1];
                if(B[i][j]==1 && (P<2 || P>3)) M[i][j] = 0;
                if(B[i][j]==0 && P==3) M[i][j] = 1;
            }
        }
        
        B.clear();
        B = M;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    Solution object;
    object.gameOfLife(matrix);
    return 69;
}