#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()==0) return 0;
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[count]!=nums[i])
                nums[++count] = nums[i];
        }
        return count+1;
    }
};

int main()
{
    vector<int> V= {1, 2, 5, 7, 8, 3};
    Solution object;
    cout << object.removeDuplicates(V);
    return 69;
}