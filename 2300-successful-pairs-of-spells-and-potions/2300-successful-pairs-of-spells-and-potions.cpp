class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int n = potions.size();
        sort(potions.begin(), potions.end());
        for(auto x:spells)
        {
            auto pos = lower_bound(potions.begin(), potions.end(), (success+x-1)/x);
            ans.push_back(potions.end()-pos);
        }
        return ans;
    }
};