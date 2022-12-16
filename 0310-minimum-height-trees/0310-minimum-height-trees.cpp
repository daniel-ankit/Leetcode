class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        vector<int>indegree(n, 0), adj[n];
        for(auto x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
            indegree[x[0]]++;
            indegree[x[1]]++;
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0; i<n; i++)
        {
            if(indegree[i]==1) q.push(i);
        }
        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp;
            for(int i=0; i<size; i++)
            {
                auto now = q.front();
                q.pop();
                for(auto x:adj[now])
                {
                    indegree[x]--;
                    if(indegree[x]==1)q.push(x);
                }
                temp.push_back(now);
            }
            ans = temp;
        }
        return ans;
    }
};