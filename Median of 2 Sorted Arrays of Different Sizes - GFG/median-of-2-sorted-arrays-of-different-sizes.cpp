//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<int>nums;
        int i=0, j=0, n=array1.size(), m=array2.size();
        while(i<n && j<m)
        {
            if(array1[i]<=array2[j]) nums.push_back(array1[i++]);
            else nums.push_back(array2[j++]);
        }
        while(i<n) nums.push_back(array1[i++]);
        while(j<m) nums.push_back(array2[j++]);
        
        if(nums.size()%2) return nums[nums.size()/2];
        return (nums[nums.size()/2 -1] + nums[nums.size()/2])/2.0;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends