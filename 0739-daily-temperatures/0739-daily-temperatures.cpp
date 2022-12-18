class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> S;
        int n = temp.size();
        vector<int> ans;
        for(int i=n-1; i>=0; i--)  
        {
            while(!S.empty() && temp[S.top()]<=temp[i]) S.pop();
            if(S.empty()) ans.push_back(0);
            else ans.push_back(S.top()-i);
            S.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};