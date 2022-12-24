class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int xora = 0, xorb = 0;
        for(auto x:arr1) xora ^= x;
        for(auto x:arr2) xorb ^= x;
        return xora&xorb;
    }
};