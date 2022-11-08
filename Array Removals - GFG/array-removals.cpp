//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        sort(arr.begin(), arr.end());
        int i=0, j=1, n=arr.size(), maxx = INT_MIN;
         if(n==1) return 0;
        while(j<n)
        {
            if(arr[j]-arr[i]<=k)
            {
                maxx = max(maxx, j-i+1);
                j++;
            }
            else i++;
        }
        if(maxx==INT_MIN) return 1;
        return n-maxx;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends