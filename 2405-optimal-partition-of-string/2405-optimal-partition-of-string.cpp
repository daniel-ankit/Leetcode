class Solution {
public:
    int partitionString(string s) {
        map<char, bool>mp;
        int cnt = 0;
        for(auto x:s)
        {
            if(mp.find(x) != mp.end())
            {
                mp.clear();
                cnt++;
                cout << x << " ";
            }
            mp[x] = 1;
        }
        return cnt+1;
    }
};