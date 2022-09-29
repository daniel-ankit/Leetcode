class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> M;
        for(auto x:t) M[x]++;
        int i=0, j=0, count=0, len = INT_MAX;
        string ans="";
        while(j<s.size())
        {
            if(M[s[j]] > 0)
               count++;
            M[s[j]]--;
            while(count==t.size())
            {
                if(j-i+1 < len)
                {
                    ans = s.substr(i, j-i+1);
                    len = ans.size();
                }
                M[s[i]]++;
                if(M[s[i]]>0) count--;
                i++;
            }
            j++;
        }
        return ans;
    }
};