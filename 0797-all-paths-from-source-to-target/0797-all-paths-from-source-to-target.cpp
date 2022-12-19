class Solution {
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& graph, vector<int>path, int i)
    {
        path.push_back(i);
        if(i==graph.size()-1)
        {
            ans.push_back(path);
            return;
        }
        for(auto x:graph[i]) dfs(graph, path, x);
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph, {}, 0);
        return ans;
    }
};