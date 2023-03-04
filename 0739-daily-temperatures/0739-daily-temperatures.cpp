class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int>ans(n, 0);
        stack<int>S;
        for(int i=n-1; i>=0; i--)
        {
            while(!S.empty() && temp[S.top()]<=temp[i]) S.pop();
            if(!S.empty()) ans[i] = (S.top()-i);
            S.push(i);
        }
        return ans;
    }
};