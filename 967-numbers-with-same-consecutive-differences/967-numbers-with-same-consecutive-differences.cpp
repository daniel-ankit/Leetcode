class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        queue<string> q;
        for(int i=1; i<=9; i++)
            q.push(to_string(i));
        vector<int> ans;
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                auto now = q.front();
                q.pop();
                if(now.size()==n)
                {
                    ans.push_back(stoll(now));
                    continue;
                }
                char last = now[now.size()-1];
                if(last+k <= '9' && last+k >= '0')
                {
                    now.push_back(last+k);
                    q.push(now);
                    now.pop_back();
                }
                if(k!=0 && last-k <= '9' && last-k >= '0')
                {
                    now.push_back(last-k);
                    q.push(now);
                }
            }
        }
        return ans;
    }
};

