//{ Driver Code Starts
#include <iostream>
#include<algorithm>
#include<cstdio>
//#include<Windows.h> 
using namespace std;  

// } Driver Code Ends

#include <stack>

class Solution{
    public:
    /*You are requried to complete this method */
    int max_Books(int a[], int n, int k)
    {
        stack<int>stack;
        int maxx = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>k)
            {
                int sum = 0;
                while(!stack.empty())
                {
                    sum += stack.top();
                    stack.pop();
                }
                maxx = max(maxx, sum);
            }
            else stack.push(a[i]);
        }
        int sum = 0;
        while(!stack.empty())
        {
            sum += stack.top();
            stack.pop();
        }
        maxx = max(maxx, sum);
        return maxx;
    }
};

//{ Driver Code Starts.
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	int ar[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
  	Solution ob;
  	cout<<ob.max_Books(ar,n,k)<<endl;
        
  }    
  return 0;
}


// } Driver Code Ends