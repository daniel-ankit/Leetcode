class Solution {
public:
    int myAtoi(string s) {
        int sign = 1, i = 0;
        long long ans = 0;
        while(s[i]==' ') i++;
        if(s[i]=='-')
        {
            sign = -1;
            i++;
        }
        else if(s[i]=='+') i++;
        while(i<s.size())
        {
            if(s[i]>='0' && s[i]<='9') {
                ans = ans*10 + (s[i]-'0');
                i++;
            }
            else break;
            if(ans*sign < INT_MIN) return INT_MIN;
        if(ans*sign > INT_MAX) return INT_MAX;
        }
        if(ans*sign < INT_MIN) return INT_MIN;
        if(ans*sign > INT_MAX) return INT_MAX;
        return ans*sign;
    }
};