//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int N)
    {
        int level=0, ind = 0;
        vector<vector<int>> ans;
        while(N>0)
        {
            int elements = pow(2, level);
            vector<int> temp;
            for(int i=0; i<elements; i++)
            {
                temp.push_back(arr[ind++]);
                N--;
                if(N==0) break;
            }
            sort(temp.begin(), temp.end());
            ans.push_back(temp);
            level++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends