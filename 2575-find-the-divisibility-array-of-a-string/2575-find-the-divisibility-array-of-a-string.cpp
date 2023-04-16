class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>ans;
        long long curr = 0;
        for(auto x:word)
        {
            curr = curr*10 + (x-'0');
            curr%=m;
            if(!curr) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};