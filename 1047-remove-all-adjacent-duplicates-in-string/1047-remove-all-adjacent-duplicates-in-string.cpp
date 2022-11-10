class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> S;
        for(auto x:s)
        {
            if(!S.empty() && S.top()==x) S.pop();
            else S.push(x);
        }
        s.clear();
        while(!S.empty())
        {
            s+=S.top();
            S.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};