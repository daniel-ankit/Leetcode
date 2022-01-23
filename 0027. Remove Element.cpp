#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int removeElement(vector<int>& nums, int val)
    {
        int count=0;
        int end=nums.size()-1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==val) count++;
        }
        for(int i=0; i<nums.size() && count>0; i++)
        {
            if(nums[i]==val)
            {
                swap(nums[i], nums[end]);
                count--;
                end--;
            }
        }
        return end+1;
    }
};

int main()
{
    vector<int> V = {2, 4, 5, 9, 5, 1, 2, 6, 7};
    Solution object;
    cout << object.removeElement(V, 4);
    return 69;
}