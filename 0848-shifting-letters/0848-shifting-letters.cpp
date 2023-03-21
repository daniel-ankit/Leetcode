class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int i=shifts.size()-1; i>=0; i--)
        {
            shifts[i]%=26;
            if(i>=1) shifts[i-1]+=shifts[i];
        }
        for(int i=0; i<shifts.size(); i++)
        {
            shifts[i]%=26;
            for(int j=0; j<shifts[i]; j++)
            {
                s[i]++;
                if(s[i]>'z') s[i] = 'a';
            }
        }
        return s;
    }
};