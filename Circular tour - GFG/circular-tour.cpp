//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends

class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
        vector<int>diff;
        for(int i=0; i<n; i++)
            diff.push_back(p[i].petrol - p[i].distance);
        for(int i=0; i<n; i++) diff.push_back(diff[i]);
        int i=0, j=0, sum=0;
        while(j<diff.size())
        {
            sum += diff[j];
            if(sum<0) i=j+1, sum=0;
            else
            {
                if(j-i+1==n) return i;
                if(j-i+1 > n) i=j+1, sum=0;
            }
            j++;
        }
        return -1;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends