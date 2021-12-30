class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int second = accumulate(nums.begin(), nums.end(), 0), first = 0;
        int index=0;
        for(auto x : nums)
        {
            second-=x;
            if(first==second) break;
            first+=x, index++;   
        }
        if(index==nums.size()) index=-1;
        return index;
    }
};