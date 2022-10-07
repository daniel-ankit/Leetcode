class Solution {
public:
    int hIndex(vector<int>& c) {
        int n=c.size(), i=0, j=n-1;
        int ans = 0;
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(c[mid]>=n-mid)
            {
                ans = n-mid;
                j = mid-1;
            }
            else i = mid+1;
        }
        return ans;
    }
};