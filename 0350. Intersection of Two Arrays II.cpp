class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> V;
        sort(nums1.begin(), nums1.end()), sort(nums2.begin(), nums2.end());
        while(!nums1.empty() && !nums2.empty())
        {
            if(nums1.back()==nums2.back())
            {
                V.push_back(nums1.back());
                nums1.pop_back();
                nums2.pop_back();
            }
            else
            {
                if(nums1.back()>nums2.back()) nums1.pop_back();
                else nums2.pop_back();
            }
        }
        return V;
    }
};