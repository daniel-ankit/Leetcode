class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int Xor = 0;
        for(int i=0; i<nums.size(); i++)
            Xor^=nums[i];
        int i=0;
        while(Xor)
        {
            if(Xor & (1<<i)) break;
            i++;
        }
        vector<int>nums1, nums2;
        for(auto x:nums)
        {
            if(x & (1<<i)) nums1.push_back(x);
            else nums2.push_back(x);
        }
        for(int i=1; i<nums1.size(); i++) nums1[0]^=nums1[i];
        for(int i=1; i<nums2.size(); i++) nums2[0]^=nums2[i];
        return {nums1[0], nums2[0]};
    }
};