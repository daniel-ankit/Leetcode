class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> st(deadends.begin(), deadends.end()), seen;
        queue<pair<string, int>> q;
        q.push({"0000", 0});
        seen.insert("0000");

        while(q.size()) {
            string s = q.front().first;
            int d = q.front().second; q.pop();

            if(s == target) return d;
            if(st.find(s) != st.end()) continue;
            
            for(int i=0; i<4; i++) {
                string t = s, u = s;
                t[i] < '9' ? t[i]++ : t[i] = '0';
                if(seen.find(t) == seen.end()) q.push({t, d + 1}), seen.insert(t);

                u[i] > '0' ? u[i]-- : u[i] = '9';
                if(seen.find(u) == seen.end()) q.push({u, d + 1}), seen.insert(u);
            }
        }
        return -1;
    }
};