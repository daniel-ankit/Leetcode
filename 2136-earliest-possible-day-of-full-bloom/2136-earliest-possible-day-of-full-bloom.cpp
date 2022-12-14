class Solution {
public:
    int earliestFullBloom(vector<int>& p, vector<int>& g) {
        
        vector<pair<int, int>> vec;
        for(int i=0; i<p.size(); i++)
            vec.push_back({g[i], p[i]});
        
        sort(vec.begin(), vec.end(), greater<pair<int, int>>());
        
        int plant = 0, maxx = 0;
        for(auto x:vec)
        {
            plant += x.second;
            maxx = max(maxx, plant + x.first);
        }
        return maxx;
    }
};