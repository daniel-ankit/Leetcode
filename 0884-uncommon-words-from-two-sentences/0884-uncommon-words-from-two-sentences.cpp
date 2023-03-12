class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int>mp1, mp2;
        s1 += ' ', s2 += ' ';
        string temp;
        
        for(auto x:s1)
        {
            if(x==' ') mp1[temp]++, temp = "";
            else temp += x;
        }
        for(auto x:s2)
        {
            if(x==' ') mp2[temp]++, temp = "";
            else temp += x;
        }
        
        vector<string>ans;
        for(auto x:mp1)
        {
            if(mp2.find(x.first) == mp2.end() && x.second == 1)
                ans.push_back(x.first);
        }
        for(auto x:mp2)
        {
            if(mp1.find(x.first) == mp1.end() && x.second == 1)
                ans.push_back(x.first);
        }
        return ans;
    }
};