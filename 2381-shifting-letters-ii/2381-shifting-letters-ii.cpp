class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int>shift(n+1, 0);
        for(auto x:shifts)
        {
            if(x[2]==0) x[2] = -1;
            shift[x[0]]+=x[2];
            shift[x[1]+1]-=x[2];
        }
        for(int i=1; i<n; i++)
            shift[i] += shift[i-1];
        for(int i=0; i<shift.size()-1; i++)
        {
            shift[i]%=26;
            int inc = 1;
            if(shift[i]<0) inc = -1; 
            for(int j=0; j<abs(shift[i]); j++)
            {
                s[i]+=inc;
                if(s[i]>'z') s[i] = 'a';
                if(s[i]<'a') s[i] = 'z';
            }
        }
        return s;
    }
};