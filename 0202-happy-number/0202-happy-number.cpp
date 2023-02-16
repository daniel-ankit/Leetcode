class Solution {
    int cal(int n)
    {
        int ans = 0;
        while(n)
        {
            ans += pow((n%10), 2);
            n/=10;
        }
        return ans;
    }
public:
    bool isHappy(int n) {
        for(int i=0; i<25; i++)
        {
            int res = cal(n);
            if(res==4) return 0;
            if(res==1) return 1;
            n = res;
        }
        return 0;
    }
};