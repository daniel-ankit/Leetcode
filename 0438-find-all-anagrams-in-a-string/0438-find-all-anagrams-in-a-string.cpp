class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> cp(26,0);
        vector<int> cs(26,0);
        int n = s.length();
        int m = p.length();
        
        vector<int> ans;
        
        for(char ch : p) cp[ch-'a']++;
        
        for(int i = 0 ; i < n; i++)
        {
            if(i < m) cs[s[i]-'a']++;
            else
            {
                if(isSame(cp,cs))
                    ans.push_back(i-m);
                cs[s[i-m]-'a']--;
                cs[s[i]-'a']++;
            }
        }
        if(isSame(cp,cs))
            ans.push_back(n-m);
        return ans;
    }
    
    bool isSame(vector<int>& cp,vector<int>& cs)
    {
        for(int i = 0; i < 26; i++) if(cp[i] != cs[i]) return false;
        return true;
    }
};