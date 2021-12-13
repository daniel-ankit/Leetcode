class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        for(int i=0; i<nums2.size(); i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(), nums1.end());
        int N = nums1.size();
        double ans;
        if(N%2==0)
        {
            ans = (nums1[N/2]+nums1[N/2-1])/2;
            if((nums1[N/2]+nums1[N/2-1])%2!=0)
                ans+=0.5;
        }
        else ans = nums1[N/2];
        return ans;
    }
};