#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
    set <int> S;
    for(auto x:nums)
        if(x>0) S.insert(x);
    int j=1;
    for(auto i = S.begin(); i!=S.end(); i++, j++)
        if(*i != j) return j;
    return j;
    }
};

int main()
{
    Solution object;
    vector<int> V = {4, 5, 2, 8, 9, 10};
    cout<< object.firstMissingPositive(V);
    return 69;
}