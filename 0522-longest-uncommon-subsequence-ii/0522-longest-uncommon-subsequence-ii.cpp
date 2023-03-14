class Solution {
    bool subStr(string a, string b)
    {
        int j=0, i=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j]) i++, j++;
            else i++;
        }
        return j == b.size();
    }
public:
    int findLUSlength(vector<string>& strs) {
        int maxx = -1;
        for(int i=0; i<strs.size(); i++)
        {
            bool check = 1;
            for(int j=0; j<strs.size(); j++)
            {
                if(i!=j && strs[i].size() <= strs[j].size() && subStr(strs[j], strs[i]))
                    check = 0;
            }
            if(check) maxx = max(maxx, (int)strs[i].size());
        }
        return maxx;
    }
};