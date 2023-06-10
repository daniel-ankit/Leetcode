//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends

bool cmp(int &a, int &b)
{
    if(a*b <= 0)
    {
        if(a<0) return 1;
        return 0;
    }
    return 0;
}

class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int> pos, neg;
            for(int i=0; i<n; i++)
            {
                if(arr[i] < 0) neg.push_back(arr[i]);
                else pos.push_back(arr[i]);
            }
            int j = 0;
            for(int i=0; i<n; i++)
            {
                if(j<neg.size()) arr[i] = neg[j++];
                else arr[i] = pos[i-j];
            }
        }
};


//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends