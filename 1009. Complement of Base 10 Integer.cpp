class Solution {
public:
    int bitwiseComplement(int n)
    {
        string S="";
        if(!n) return 1;
        while(n)
        {
            (n%2) ? (S+='0') : (S+='1');
            n/=2;
        }
        for(int i=0; i<S.length(); i++)
            n += pow(2, i)*(S[i]-'0');
        return n;
    }
};