class Solution {
private:
    bool isAnagram(string s, string t)
        {
            if(s.length()!=t.length()) return 0;
            int A[26] ={0};
            for(int i=0; i<s.size(); i++)
            {
                A[s[i]-'a']++;
                A[t[i]-'a']--;
            }
            for(int i=0; i<26; i++)
                if(A[i]!=0) return 0;
            return 1;
        }
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> V;
        int k = p.length(), n=s.length();
        if(p.length()>s.length()) return V;
        for(int i=0; i<n-k+1; i++)
        {
            string temp = s.substr(i, k);
            if(isAnagram(temp, p)) V.push_back(i);
        }
        return V;
    }
};