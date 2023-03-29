class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        map<int, int>mp;
        for(int i=1; i<=m; i++)
            mp[i] = i-1;
        vector<int>ans;
        for(auto x:queries)
        {
            ans.push_back(mp[x]);
            for(auto y:mp)
            {
                if(y.second < mp[x]) mp[y.first]++;
            }
            mp[x] = 0;
        }
        return ans;
    }
};