class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> reachable(n, 0), ans;
        for(auto x:edges)
            reachable[x[1]] = 1;
        for(int i=0; i<n; i++)
            if(!reachable[i]) ans.push_back(i);
        return ans;
    }
};