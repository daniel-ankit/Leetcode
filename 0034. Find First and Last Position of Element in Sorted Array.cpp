#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        if(nums.size()==0) return {-1, -1};
        int a = -1, b=-1;
        int i=0, j=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]==target && a==-1)
                a = i;
            if(a==-1) i++;
            
            if(nums[j]==target && b==-1)
                b = j;
            if(b==-1) j--;
            if(a!=-1 && b!=-1) break;
        }
        
        return{a, b};
    }
};

int main()
{
    vector<int> V = {1, 5, 8, 9, 4};
    Solution object;
    object.searchRange(V, 10);
    return 69;
}