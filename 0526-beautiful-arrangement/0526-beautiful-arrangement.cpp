class Solution {
    void fn(int i, int n, vector<int>&vis, int &cnt)
    {
        if(i>n) cnt++;
        for(int j=1; j<=n; j++)
        {
            if(!vis[j] && (i%j==0 || j%i==0))
            {
                vis[j] = 1;
                fn(i+1, n, vis, cnt);
                vis[j] = 0;
            }
        }
    }
public:
    int countArrangement(int n) {
        vector<int>vis(n+1, 0);
        int cnt = 0;
        fn(1, n, vis, cnt);
        return cnt;
    }
};