class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int>wins, looses;
        for(auto x:matches)
        {
            wins[x[0]] = 1;
            looses[x[1]]++;
        }
        vector<vector<int>> answer;
        vector<int> ans0;
        for(auto x:wins)
        {
            if(looses.find(x.first)==looses.end())
            {
                ans0.push_back(x.first);
            }
        }
        answer.push_back(ans0);
        ans0.clear();
        for(auto x:looses)
        {
            if(x.second==1) ans0.push_back(x.first);
        }
        answer.push_back(ans0);
        return answer;
    }
};