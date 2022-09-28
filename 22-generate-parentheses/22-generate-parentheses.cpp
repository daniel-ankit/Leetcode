class Solution {
    vector<string> ans;
    void fn(int open, int close, string temp, int n)
    {
        if(open==n && close==n){
            ans.push_back(temp);
            return;
        }
        if(open<n) fn(open+1, close, temp+'(', n);
        if(close < open) fn(open, close+1, temp+')', n);
    }
public:
    vector<string> generateParenthesis(int n) {
        fn(0, 0, "", n);
        return ans;
    }
};