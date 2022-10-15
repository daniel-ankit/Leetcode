class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int> adj[n],ans, out(n, 0);
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
        while(!q.empty())
        {
            auto now = q.front();
            ans.push_back(now);
            q.pop();
            for(auto x:adj[now])
            {
                out[x]--;
                if(out[x]==0) q.push(x);
            }
        }
        if(ans.size()==n) return ans;
        return {};
    }
};