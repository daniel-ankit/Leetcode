class Solution {
    void fn(string s, int i, vector<string>&ans, string temp)
    {
        if(i>s.size()) return;
        if(temp.size()==s.size())
        {
            ans.push_back(temp);
            return;
        }
        if(s[i]>='0' && s[i]<='9') fn(s, i+1, ans, temp+s[i]);
        else
        {
            temp += s[i];
            fn(s, i+1, ans, temp);
            temp.pop_back();
            if(s[i]>='a' && s[i]<='z')
            {
                temp += s[i]-char(32);
                fn(s, i+1, ans, temp);
            }
            else
            {
                temp += s[i]+char(32);
                fn(s, i+1, ans, temp);
            }
        }
        
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        fn(s, 0, ans, "");
        return ans;
    }
};