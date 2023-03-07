class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size() or s.empty()) return "";
        
        int i = 0, j = 0;
        int start = -1, len = INT_MAX;
        std::vector<int> m(128, 0);
        for(auto c : t) m[c]++;
        
        while (j < s.size())
        {
            if (isFound(m))
            {
                if (j - i < len)
                {
                    start = i;
                    len = j - i;
                }
                m[s[i++]]++;
                continue;
            }
            m[s[j++]]--;
        }
        while (isFound(m))
        {
            if (j - i < len) {
                start = i;
                len = j - i;
            }
            m[s[i++]]++;
        }
        if (start != -1) return s.substr(start, len);
        return "";
    }

private:
    bool isFound(const std::vector<int>& m) {
        return std::all_of(m.begin(), m.end(), [](int i) { return i <= 0; });
    }
};