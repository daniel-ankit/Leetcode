class Solution {
public:
    int dp[1001][2][101];
    int dp_fun(int k,vector<int>& prices,int idx,int b)
    {
        if(k==0 || idx==prices.size()) return 0;
        if(dp[idx][b][k] != -1) return dp[idx][b][k];
        if(b==1)
            return dp[idx][b][k] = max((-prices[idx]+dp_fun(k,prices,idx+1,0)), dp_fun(k,prices,idx+1,1));
        return dp[idx][b][k] = max((prices[idx]+dp_fun(k-1,prices,idx+1,1)), dp_fun(k,prices,idx+1,0));
    }
    int maxProfit(int k, vector<int>& prices)
    {
        
        memset(dp,-1,sizeof(dp));
        return dp_fun(k,prices,0,1);
    }
};