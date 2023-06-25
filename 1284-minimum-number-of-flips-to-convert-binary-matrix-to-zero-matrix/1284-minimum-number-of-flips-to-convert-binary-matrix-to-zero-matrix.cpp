class Solution {
     int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
public:
    int minFlips(vector<vector<int>>& mat) {
        map<vector<vector<int>>, bool>mp;
        queue<vector<vector<int>>>q;
        int step = 0, N = mat.size(), M = mat[0].size();
        q.push(mat);
        mp[mat] = 1;
        while(!q.empty())
        {
            int n = q.size();
            while(n--)
            {
                int sum = 0;
                for(int i=0; i<N; i++)
                {
                    for(int j=0; j<M; j++)
                        sum += q.front()[i][j];
                }
                if(!sum) return step;
                for(int i=0;i<N;++i)
                {
                    for(int j=0;j<M;++j)
                    {
                        vector<vector<int>> temp=q.front();
                        temp[i][j] = 1-temp[i][j];
                        for(int d=0; d<4; ++d)
                        {
                            int ni = i+dx[d];
                            int nj = j+dy[d];
                            if(ni>=0 && nj>=0 && ni<N && nj<M)
                                temp[ni][nj]=1-temp[ni][nj];
                        }
                        if(mp.find(temp)==mp.end())
                        {
                            q.push(temp);
                            mp[temp] = 1;
                        }
                    }
                }
                q.pop();
            }
            step++;
        }
        return -1;
    }
};