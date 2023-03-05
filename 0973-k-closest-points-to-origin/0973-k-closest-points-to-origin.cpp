class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k)
    {
        vector<pair<int, vector<int>>> T;
        vector<vector<int>> V;
        for(int i=0; i<p.size(); i++)
        {
            int prod= p[i][0]*p[i][0] + p[i][1]*p[i][1];
            T.push_back({prod, p[i]});
        }
        sort(T.begin(), T.end());
        for(int i=0; i<k; i++) 
        V.push_back(T[i].second);
            return V;
    }
};