//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int a = accumulate(S1.begin(), S1.end(), 0);
        int b = accumulate(S2.begin(), S2.end(), 0);
        int c = accumulate(S3.begin(), S3.end(), 0);
        int i = 0, j = 0, k = 0;
        while(i<N1 && j<N2 && k<N3)
        {
            int minn = min({a, b, c});
            while(i<N1 && a>minn)
                a-=S1[i++];
            while(j<N2 && b>minn)
                b-=S2[j++];
            while(k<N3 && c>minn)
                c-=S3[k++];
            if(a==b && b==c) return a;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends