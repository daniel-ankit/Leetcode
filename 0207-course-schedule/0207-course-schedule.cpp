class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n], out(n, 0);
        for(auto x:pre)
        {
            adj[x[1]].push_back(x[0]);
            out[x[0]]++;
        }
        queue<int> q;
        for(int i=0; i<n; i++)
        {
            if(out[i]==0) q.push(i);
        }
        int count = 0;
        while(!q.empty())
        {
            auto now = q.front();
            count++;
            q.pop();
            for(auto x:adj[now])
            {
                out[x]--;
                if(out[x]==0) q.push(x);
            }
        }
        return count==n;
    }
};