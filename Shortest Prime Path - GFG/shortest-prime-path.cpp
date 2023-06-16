//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
    bool prime(int n)
    {
        if(n==1) return 0;
        for(int i=2; i<=sqrt(n); i++)
            if(n%i==0) return 0;
        return 1;
    }
public:
    int solve(int Num1,int Num2)
    {   
        vector<int>vis(10000, 0);
        queue<int>q;
        q.push(Num1);
        vis[Num1] = 1;
        
        int level = 0;
        
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                auto now = q.front();
                q.pop();
                if(now == Num2) return level;
                string temp = to_string(now);
                for(int i=0; i<4; i++)
                {
                    char hold = temp[i];
                    for(char j='0'; j<='9'; j++)
                    {
                        if(i==0 and j=='0') continue;
                        temp[i] = j;
                        int num = stoi(temp);
                        if(!vis[num] && prime(num))
                        {
                            q.push(num);
                            vis[num] = 1;
                        }
                    }
                    temp[i] = hold;
                }
            }
            level++;
        }
        return -1;
    }
};


//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int Num1,Num2;
      cin>>Num1>>Num2;
      Solution obj;
      int answer=obj.solve(Num1,Num2);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends