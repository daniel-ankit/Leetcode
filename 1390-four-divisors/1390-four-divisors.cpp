class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(auto x:nums)
        {
            int cnt = 0, sum = 0;
            for(int i=1; i<=sqrt(x); i++)
            {
                if(i*i == x)
                {
                    cnt++;
                    sum += i;
                }
                if(x%i==0)
                {
                    cnt+=2;
                    sum += (x/i + i);
                }
            }
            if(cnt==4) ans += sum;
        }
        return ans;
    }
};