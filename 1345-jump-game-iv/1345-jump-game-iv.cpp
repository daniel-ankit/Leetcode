class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return 0;
        unordered_map<int, vector<int>>mp;
        for(int i=0; i<n; i++)
            mp[arr[i]].push_back(i);
        vector<int>vis(n, 0);
        queue<int>q;
        q.push(0);
        vis[0] = 1;
        int step = 0;
        while(!q.empty())
        {
            int m = q.size();
            while(m--)
            {
                auto now = q.front();
                q.pop();
                if(now==n-1) return step;
                if(now-1>=0 && !vis[now-1]) q.push(now-1), vis[now-1]=1;
                if(now+1<n && !vis[now+1]) q.push(now+1), vis[now+1]=1;
                for(auto x:mp[arr[now]])
                    if(!vis[x]) q.push(x), vis[x] = 1;
                mp[arr[now]].clear();
            }
            step++;
        }
        return step;
    }
};