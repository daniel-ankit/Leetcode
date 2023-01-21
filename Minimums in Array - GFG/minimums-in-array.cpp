//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long long getMin(long long A[], long long B[], long long n)
    {
        if(n==1) return -1;
        vector<pair<long long, long long>>nums1, nums2;
        for(int i=0; i<n; i++)
        {
            nums1.push_back({A[i], i});
            nums2.push_back({B[i], i});
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        if(nums1[0].second != nums2[0].second) return nums1[0].first+nums2[0].first;
        return min(nums1[0].first+nums2[1].first, nums1[1].first+nums2[0].first);
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n, i;
        cin>>n;
        long long A[n+1], B[n+1];
        for(i=0;i<n;i++)
        cin>>A[i];
    
        for(i=0;i<n;i++)
        cin>>B[i];
        Solution ob;
        cout<< ob.getMin(A, B, n) <<endl;
    }
}

// } Driver Code Ends