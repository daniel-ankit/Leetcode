bool cmp(pair<int, int>&a, pair<int, int>&b)
{
    if(a.first!=b.first) return a.first > b.first;
    return a.second > b.second;
}

class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<pair<int, int>> v;
        sort(arr.begin(), arr.end());
        int n = arr.size(), m = arr[(n-1)/2];
        for(auto x:arr)
            v.push_back({abs(x-m), x});
        sort(v.begin(), v.end(), cmp);
        vector<int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(v[i].second);
        return ans;
    }
};