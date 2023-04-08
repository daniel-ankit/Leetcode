class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        for(auto x:queries)
        {
            for(auto y:dictionary)
            {
                int cnt = 0;
                for(int i=0; i<x.size(); i++)
                    if(x[i]!=y[i]) cnt++;
                if(cnt<=2)
                {
                    ans.push_back(x);
                    break;
                }
            }
        }
        // vector<string>res;
        // for(auto x:ans) res.push_back(x);
        return ans;
    }
};