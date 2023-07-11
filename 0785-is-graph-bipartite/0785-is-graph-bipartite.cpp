class Solution {
    bool check(int i, int color, vector<vector<int>>& graph, vector<int>&colors)
    {
        colors[i] = color;
        for(auto x:graph[i])
        {
            if(colors[x]==-1)
            {
                if(check(x, !color, graph, colors)) return 1;
            }
            else if(colors[i] == colors[x]) return 1;
        }
        return 0;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>colors(n, -1);
        for(int i=0; i<n; i++)
        {
            if(colors[i] == -1 && check(i, 0, graph, colors)) return 0;
        }
        return 1;
    }
};