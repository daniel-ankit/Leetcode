class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        map<char, int> M;
        M['P'] = 0;
        M['M'] = 0;
        M['G'] = 0;
        int score = 0;
        for(int i=0; i<garbage.size(); i++)
        {
            for(int j=0; j<garbage[i].size(); j++)
            {
                M[garbage[i][j]] = i;
                score++;
            }
        }
        for(int i=1; i<travel.size(); i++)
            travel[i] += travel[i-1];
        if(M['M']>0) score += travel[M['M']-1];
        if(M['P']>0) score += travel[M['P']-1];
        if(M['G']>0) score += travel[M['G']-1];
        return score;
    }
};