class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        if(s.back() == '1') return 0;
        queue<int>q;
        q.push(0);
        s[0] = '1';
        int maxx = 0, n = s.size();
        while(!q.empty())
        {
            auto now = q.front();
            q.pop();
            for(int i=max(maxx, now+minJump); i<=min(n, now+maxJump); i++)
            {
                if((i>=0 && i<s.size()) && s[i]=='0') s[i] = '1', q.push(i);
            }
            maxx = now+maxJump+1;
        }
        return s.back() == '1';
    }
};