class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        int same, replace;
        vector <int> V (nums.size()+1);
        for(int i=0; i<nums.size(); i++)
            V[nums[i]]++;
        for(int i=1; i<=nums.size(); i++)
        {
            if(V[i]==2) same = i;
            if(V[i]==0) replace = i;
        }
        return {same, replace};
    }
};