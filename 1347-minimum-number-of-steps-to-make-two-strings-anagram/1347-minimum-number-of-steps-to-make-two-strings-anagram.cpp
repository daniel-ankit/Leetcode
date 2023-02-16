class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int>mp;
        int cnt = 0;
        for(auto x:t) mp[x]++;
        for(auto x:s)
        {
            if(mp[x]) mp[x]--;
            else cnt++;
        }
        return cnt;
    }
};