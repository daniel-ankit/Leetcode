class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto i:queries)
        {
            int x = i[0], y = i[1], cnt = 0;
            while(x!=y)
            {
                if(x>y) x/=2, cnt++;
                else y/=2, cnt++;
            }
            ans.push_back(cnt+1);
        }
        return ans;
    }
};