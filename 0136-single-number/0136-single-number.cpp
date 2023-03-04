class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(auto x:nums) xorr ^= x;
        return xorr;
    }
};