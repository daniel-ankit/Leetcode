class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans = pref;
        for(int i=1; i<pref.size(); i++)
            ans[i] = pref[i] ^ pref[i-1];
        return ans;
    }
};