//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    vector<string> ans;
    void dfs(vector<vector<int>> &m, int i, int j, string temp)
    {
        if(i<0 || i>=m.size() || j<0 || j>=m.size() || m[i][j]==0) return;
        if(i==m.size()-1 && j==m.size()-1)
        {
            ans.push_back(temp);
            return;
        }
        m[i][j] = 0;
        temp += 'D';
        dfs(m, i+1, j, temp);
        temp.pop_back();
        temp += 'U';
        dfs(m, i-1, j, temp);
        temp.pop_back();
        temp += 'R';
        dfs(m, i, j+1, temp);
        temp.pop_back();
        temp += 'L';
        dfs(m, i, j-1, temp);
        temp.pop_back();
        m[i][j] = 1;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        if(m[0][0]==0) return {};
        dfs(m, 0, 0, "");
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends