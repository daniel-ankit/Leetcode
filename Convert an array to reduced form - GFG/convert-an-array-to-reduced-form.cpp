//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

bool cmp(pair<int,int>&a, pair<int, int>&b)
{
    return a.second < b.second;
}

class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    vector<pair<int, int>>vec;
	    for(int i=0; i<n; i++)
	        vec.push_back({arr[i], i});
	        
	    sort(vec.begin(), vec.end());
	    for(int i=0; i<n; i++) vec[i].first = i;
	    sort(vec.begin(), vec.end(), cmp);
	    for(int i=0; i<n; i++) arr[i] = vec[i].first;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends