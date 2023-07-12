class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>indegree(n, 0);
        vector<int>adj[n];
        for(auto x:pre)
        {
            adj[x[1]].push_back(x[0]);
            indegree[x[0]]++;
        }
        queue<int>q;
        for(int i=0; i<n; i++)
        {
            if(!indegree[i]) q.push(i);
        }
        int cnt = 0;
        while(!q.empty())
        {
            auto now = q.front();
            q.pop();
            cnt++;
            for(auto x:adj[now])
            {
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
        }
        return cnt == n;
    }
};