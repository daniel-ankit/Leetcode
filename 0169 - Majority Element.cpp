class Solution
{
public:
int majorityElement(vector<int>& nums)
{
        int count=0, ans=0;
        for(int n:nums)
        {
            if(count==0)
                ans = n;
            (n==ans) ? (count++) : (count--);
        }
        return ans;
    }
};