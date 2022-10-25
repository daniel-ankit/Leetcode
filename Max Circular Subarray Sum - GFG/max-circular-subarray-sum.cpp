//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kadane(int arr[], int n)
    {
        int sum = arr[0], maxx = arr[0];
        for(int i=1; i<n; i++)
        {
            sum = max(sum+arr[i], arr[i]);
            maxx = max(maxx, sum);
        }
        return maxx;
    }
    int circularSubarraySum(int arr[], int n){
        int non = kadane(arr, n), sum = 0;
        if(non<0) return non;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
            arr[i] *= -1;
        }
        int cir = kadane(arr, n)+sum;
        return max(cir, non);
    }
};


//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends