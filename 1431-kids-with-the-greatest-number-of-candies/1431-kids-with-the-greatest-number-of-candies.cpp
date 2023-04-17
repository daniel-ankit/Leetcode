class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        vector<bool>ans;
        for(int i=0; i<candies.size(); i++)
        {
            bool temp = 1;
            for(int j=0; j<candies.size(); j++)
                if(candies[j] > candies[i]+extra) temp = 0;
            ans.push_back(temp);
        }
        return ans;
    }
};