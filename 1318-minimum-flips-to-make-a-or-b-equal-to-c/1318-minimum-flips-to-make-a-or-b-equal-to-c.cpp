class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;
        while(a || b || c)
        {
            int bita = a%2, bitb = b%2, bitc = c%2;
            if(bitc==0) count += (bita+bitb);
            if(bitc==1 && bita+bitb==0) count++;
            a/=2, b/=2, c/=2;
        }
        return count;
    }
};