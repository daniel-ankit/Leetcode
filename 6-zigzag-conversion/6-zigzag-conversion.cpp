class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> ans(numRows, "");
        int i = 0, j=0, dir = 0;
        while(i<s.size())
        {
            if(dir==0)
            {
                ans[j].push_back(s[i++]);
                j++;
                if(j==numRows-1) dir = 1;
            }
            else
            {
                ans[j].push_back(s[i++]);
                j--;
                if(j==0) dir = 0;
            }
        }
        string ret;
        for(auto x:ans)
            ret+=x;
        return ret;
    }
};