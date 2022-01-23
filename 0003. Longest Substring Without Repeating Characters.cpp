class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.length()==0 || s.length()==1) return s.length();
        deque <char> S;
        int ans = 0;
        for(int i=0; i<s.length(); i++)
        {
            while(count(S.begin(), S.end(), s[i])!=0)
                S.pop_front();
            S.push_back(s[i]);
            if(S.size() > ans) ans = S.size();
        }
        return ans;
    }
};