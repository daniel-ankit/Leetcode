#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=i; j<matrix[0].size(); j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        for(int i=0; i<matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};

int main()
{
    vector<vector<int>> V;
    Solution O;
    O.rotate(V);
    return 69;
}