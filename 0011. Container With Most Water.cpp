#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int mx = INT_MIN;
        int i=0, j=height.size()-1;
        while(i<j)
        {
            int area = min(height[i], height[j])*(j-i);
            if(area>mx) mx=area;
            if(height[i]<height[j]) i++;
            else j--;
        }
        return mx;
    }
};

int main()
{
    vector<int> V = {1, 2, 4, 5, 4, 8, 9};
    Solution Object;
    cout << Object.maxArea(V);
    return 69;
}