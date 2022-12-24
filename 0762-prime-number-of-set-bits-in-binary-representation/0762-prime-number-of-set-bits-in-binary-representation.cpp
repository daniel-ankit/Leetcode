class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        map<int, bool> primes;
        primes[2] = 1;
        primes[3] = 1;
        primes[5] = 1;
        primes[7] = 1;
        primes[11] = 1;
        primes[13] = 1;
        primes[17] = 1;
        primes[19] = 1;
        primes[23] = 1;
        primes[29] = 1;
        primes[31] = 1;
        int count = 0;
        for(int j=left; j<=right; j++) 
        {
            int on = 0;
            for(int i=0; i<32; i++)
            {
                if(j & (1<<i)) on++;
            }
            if(primes[on]) count++;
        }
        return count;
    }
};