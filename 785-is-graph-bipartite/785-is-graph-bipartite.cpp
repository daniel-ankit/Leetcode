class Solution {
    bool bfs(vector<int>&color, vector<vector<int>> &graph, int ind)
    {
        queue<int> q;
        q.push(ind);
        color[ind] = 1;
        while(!q.empty())
        {
            auto x = q.front();
            q.pop();
            for(auto i:graph[x])
            {
                if(color[i]==-1)
                {
                    q.push(i);
                    if(color[x]==0) color[i] = 1;
                    else color[i] = 0;
                }
                else if(color[x]==color[i]) return 1;
            }
        }
        return 0;
    }
    
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for(int i=0; i<n; i++)
        {
            if(color[i]==-1)
            {
                if(bfs(color, graph, i)) return 0;
            }
        }
        return 1;
    }
};