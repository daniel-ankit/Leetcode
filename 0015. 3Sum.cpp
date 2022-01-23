#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> A;
        if(nums.size()<3) return A;
        set<vector<int>> V;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-2; i++)
        {
            int j=i+1, k=nums.size()-1;
            while(j<k)
            {
                int S = nums[i]+nums[j]+nums[k];
                int l = nums[j], h = nums[k];
                if(S==0)
                {
                    V.insert({nums[i], nums[j], nums[k]});
                    while(j<k && nums[j]==l) j++;
                    while(j<k && nums[k]==h) k--;
                }
                if(S>0)
                {
                    while(j<k && nums[k]==h) k--;
                }
                else
                {
                    while(j<k && nums[j]==l) j++;
                }
            }
        }
        for(auto x: V)
            A.push_back(x);
        return A;
    }
};

int main()
{
    vector<int> nums ={2, 5, 4, 2, 8, 5, 2};
    Solution object;
    object.threeSum(nums);
    return 69;
}