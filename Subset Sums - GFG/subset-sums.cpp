//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    vector<int>sums;
    void fn(int i, vector<int>nums, int sum)
    {
        if(i>nums.size()) return;
        if(i==nums.size())
        {
            sums.push_back(sum);
            return;
        }
        fn(i+1, nums, sum+nums[i]);
        fn(i+1, nums, sum);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        fn(0, arr, 0);
        return sums;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends