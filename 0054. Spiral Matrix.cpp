#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> V;
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, down = n-1, right = m-1, left = 0;
        int dir = 0;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=left; i<=right; i++)
                    V.push_back(matrix[top][i]);
                top++;
            }
            else if(dir==1)
            {
                for(int i=top; i<=down; i++)
                    V.push_back(matrix[i][right]);
                right--;
            }
            else if(dir==2)
            {
                for(int i=right; i>=left; i--)
                    V.push_back(matrix[down][i]);
                down--;
            }
            else if(dir==3)
            {
                for(int i=down; i>=top; i--)
                    V.push_back(matrix[i][left]);
                left++;
            }
            dir = (dir+1)%4;
        }
        return V;
    }
};

int main()
{
    
    return 69;
}