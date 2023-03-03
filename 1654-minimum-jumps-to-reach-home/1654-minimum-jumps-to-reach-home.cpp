class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_map<int, int> um;
        for(auto &pos: forbidden) um[pos]++;
        queue<pair<int, int>>q;
        q.push({0, 1});
        int moves = 0;
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                int now = q.front().first, back = q.front().second;
                q.pop();
                if(now == x) return moves;
                if(um.find(now)!=um.end()) continue;
                um[now]++;
                int forward = now+a, backward = now-b;
                if(backward >= 0 && back) q.push({backward, 0});
                if(forward <= 2000+a+b) q.push({forward, 1});
            }
            moves++;
        }
        return -1;
    }
};