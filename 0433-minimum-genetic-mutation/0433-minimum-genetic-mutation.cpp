class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> S;
        for(auto x:bank) S.insert(x);
        vector<int>chars = {'A', 'C', 'G', 'T'};
        queue<string> q;
        q.push(start);
        int steps = 0;
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                auto now = q.front();
                q.pop();
                if(now==end) return steps;
                for(int i=0; i<now.size(); i++)
                {
                    char save = now[i];
                    for(auto x:chars)
                    {
                        now[i] = x;
                        if(S.find(now)!=S.end())
                        {
                            S.erase(now);
                            q.push(now);
                        }
                    }
                    now[i] = save;
                }
            }
            steps++;
        }
        return -1;
    }
};