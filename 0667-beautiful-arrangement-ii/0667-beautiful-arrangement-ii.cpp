class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int>ans;
        int l = 1, h = k+1;
        while(l<=h)
        {
            ans.push_back(l++);
            if(l<=h) ans.push_back(h--);
        }
        for(int i=k+2; i<=n; i++)
            ans.push_back(i);
        return ans;
    }
};