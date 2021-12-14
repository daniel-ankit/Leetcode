class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int P=1, S=0, D;
        while(n)
        {
            D = n%10;
            P*=D;
            S+=D;
            n/=10;
        }
        D = P-S;
        return D;
    }
};