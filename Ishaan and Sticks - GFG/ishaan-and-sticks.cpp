//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> square(int arr[], int n);


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int> ans;
        ans = square(arr, n);
        for(int i:ans)
            cout << i << " ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends


vector<int> square(int arr[], int n)
{
    map<int, int>mp;
    for(int i=0; i<n; i++)
        mp[arr[i]]++;
    int size = -1, num = -1;
    for(auto x:mp)
    {
        if(x.first > size && x.second>=4)
        {
            size = x.first;
            num = x.second/4;
        }
    }
    if(size == -1) return {-1};
    return {size*size, num};
}
