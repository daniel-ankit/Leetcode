class Solution {
public:
    string removeStars(string s) {
        stack<char>stack;
        for(auto x:s)
        {
            if(x=='*') stack.pop();
            else stack.push(x);
        }
        string ans;
        while(!stack.empty())
        {
            ans += stack.top();
            stack.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};