class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool>dp(n+1,1);
          for(int i=2;i<n;i++)
          {
              if(dp[i]==1)
              {
                  count++;
                  for(int j=1; j*i<n; j++)
                      dp[i*j] = 0;
              }
          }
          return count;
    }
     
};