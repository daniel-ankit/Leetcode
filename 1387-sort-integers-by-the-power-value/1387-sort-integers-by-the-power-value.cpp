class Solution {
    int fn(int i)
    {
        if(i==1) return 0;
        if(i%2==0) return 1+fn(i/2);
        return 1+fn(i*3+1);
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>>ans;
        for(int i=lo; i<=hi; i++)
            ans.push_back({fn(i), i});
        sort(ans.begin(), ans.end());
        return ans[k-1].second;
    }
};