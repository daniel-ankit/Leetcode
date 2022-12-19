//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int r, int c, int k)
    {
        int top = 0, bottom = r-1, left = 0, right = c-1;
        int direction = 0;
        vector<int> V;
        while(V.size()!=r*c)
        {
            if(direction==0)
            {
                for(int i=left; i<=right; i++)
                    V.push_back(matrix[top][i]);
                top++;
            }
            if(direction==1)
            {
                for(int i=top; i<=bottom; i++)
                    V.push_back(matrix[i][right]);
                right--;
            }
            if(direction==2)
            {
                for(int i=right; i>=left; i--)
                    V.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(direction==3)
            {
                for(int i=bottom; i>=top; i--)
                    V.push_back(matrix[i][left]);
                left++;
            }
            direction = (direction+1)%4;
        }
        return V[k-1]; 
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends