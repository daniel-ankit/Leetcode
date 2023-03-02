class Solution {
    bool is(vector<int> &temp)
    {
        sort(temp.begin(), temp.end());
        int diff = temp[1]-temp[0];
        for(int i=1; i<temp.size(); i++)
            if(temp[i]-temp[i-1]!=diff) return 0;
        return 1;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r)
    {
        vector<bool> V;
        for(int i=0; i<l.size(); i++)
        {
            vector<int> temp;
            for(int j = l[i]; j<=r[i]; j++)
                temp.push_back(nums[j]);
            (is(temp)) ? (V.push_back(1)) : (V.push_back(0));
        }
        return V;
    }
};