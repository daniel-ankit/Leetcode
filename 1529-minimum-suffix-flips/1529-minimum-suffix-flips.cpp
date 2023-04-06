class Solution {
public:
    int minFlips(string target) {
        int flips = 0;
        char curr = '0';
        for(auto x:target)
        {
            if(x!=curr)
            {
                if(curr=='0') curr = '1';
                else curr = '0';
                flips++;
            }
        }
        return flips;
    }
};