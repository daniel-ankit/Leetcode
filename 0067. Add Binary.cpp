class Solution {
public:
    string addBinary(string &a, string &b)
    {
        string S = "";
        int carry=0;
        int add = max(a.length(), b.length());
        for(int i=a.length(); i<add; i++)
            a = '0'+a;
        for(int i=b.length(); i<add; i++)
            b = '0'+b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for(int i=0; i<add; i++)
        {
            int to = a[i]-'0' + b[i]-'0' + carry;
            if(to==1 || to==0)
            {
                S.push_back(to + '0');
                carry = 0;
            }
            else if(to==3)
            {
                S.push_back('1');
                carry = 1;
            }
            else
            {
                S.push_back('0');
                carry = 1;
            }
        }
        if(carry==1) S.push_back('1');
        reverse(S.begin(), S.end());
        return S;
    }   
};