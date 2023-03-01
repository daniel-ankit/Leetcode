class Solution {
    void fn(int i, string s, string temp, vector<string>&ans)
    {
        if(i==s.size()) ans.push_back(temp);
        if(i>=s.size()) return;
        if(s[i]>='0' && s[i]<='9')
        {
            temp.push_back(s[i]);
            fn(i+1, s, temp, ans);
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            temp.push_back(s[i]);
            fn(i+1, s, temp, ans);
            temp.pop_back();
            temp.push_back(s[i]-32);
            fn(i+1, s, temp, ans);
        }
        else
        {
            temp.push_back(s[i]);
            fn(i+1, s, temp, ans);
            temp.pop_back();
            temp.push_back(s[i]+32);
            fn(i+1, s, temp, ans);
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp;
        fn(0, s, temp, ans);
        return ans;
    }
};