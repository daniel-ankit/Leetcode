class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n], indegree(n, 0), ans;
        for(int i=0; i<n; i++)
        {
            for(auto x:graph[i])
            {
                adj[x].push_back(i);
                indegree[i]++;
            }
        }
        queue<int> q;
        for(int i=0; i<n; i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        while(!q.empty())
        {
            int now = q.front();
            q.pop();
            ans.push_back(now);
            for(auto x:adj[now])
            {
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};