class Solution {
public:
    int smallestRepunitDivByK(int k)
    {
        if(k%2==0 || k%5==0) return -1;
        unsigned long long digit = 1;
        int num=1;
        while(num%k!=0)
        {
            num = (num*10 + 1)%k;  // Overflow se bachayega
            digit++;
        }
        return digit;
    }
};