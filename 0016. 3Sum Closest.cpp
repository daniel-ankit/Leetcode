#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int ans = nums[0]+nums[1]+nums[nums.size()-1];
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-2; i++)
        {
            int a = i+1, b = nums.size()-1;
            while(a<b)
            {
                int S = nums[i] + nums[a] + nums[b];
                (S>target) ? (b--) : (a++);
                if(S==target) return target;
                if(abs(target-S)<abs(target-ans)) ans = S;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int>V = {-1,2,1,-4};
    Solution O;
    cout << O.threeSumClosest(V, 1);
    return 69;
}
