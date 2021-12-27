class Solution {
public:
    int findComplement(int num)
    {
        string S="";
        while(num>0)
        {
            (num%2) ? (S+='0') : (S+='1');
            num/=2;
        }
        for(int i=0; i<S.length(); i++)
            num+= pow(2, i)*(S[i]-'0');
        return num;
    }
};