class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& list) {
        unordered_set<string> S;
        for(auto x:list) S.insert(x);
        queue<string> q;
        q.push(beginWord);
        int level = 1;
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                auto now = q.front();
                q.pop();
                if(now == endWord) return level;
                for(int i=0; i<now.size(); i++)
                {
                    char org = now[i];
                    for(char j ='a'; j<='z'; j++)
                    {
                        now[i] = j;
                        if(S.find(now)!=S.end())
                        {
                            S.erase(now);
                            q.push(now);
                        }
                    }
                    now[i] = org;
                }
            }
            level++;
        }
        return 0;
    }
};