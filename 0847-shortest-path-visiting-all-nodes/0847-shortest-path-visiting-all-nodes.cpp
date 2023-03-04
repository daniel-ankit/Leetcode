class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        if(n==1) return 0;
        int ans = (1<<n) - 1;
        queue<pair<int, int>>q;
        map<pair<int, int>, bool>mp;
        for(int i=0; i<n; i++)
        {
            q.push({i, 1<<i});
            mp[{i, 1<<i}] = 1;
        }
        int level = 0;
        while(!q.empty())
        {
            int m = q.size();
            while(m--)
            {
                auto node = q.front().first, hash = q.front().second;
                q.pop();
                if(hash == ans) return level;
                for(auto x:graph[node])
                {
                    if(mp[{x, (1<<x) | hash}] == 0)
                    {
                        mp[{x, (1<<x) | hash}] = 1;
                        q.push({x, (1<<x) | hash});
                    }
                }
            }
            level++;
        }
        return -1;
    }
};