//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        vector<int>pref(N, Arr[N-1]), ans;
        for(int i=N-2; i>=0; i--)
            pref[i] = min(pref[i+1], Arr[i]);
        for(int i=0; i<N; i++)
        {
            int start = i+1, end = N-1, ind = -1;
            while(start <= end)
            {
                int mid = (start+end)/2;
                if(pref[mid] < Arr[i])
                {
                    ind = mid;
                    start = mid+1;
                }
                else end = mid-1;
            }
            ans.push_back(ind);
        }
        return ans;
    }
};

//{ Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}
// } Driver Code Ends