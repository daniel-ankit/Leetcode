class Solution {
public:
    int magicalString(int n) {
        vector<int> ans = {1, 2, 2};
        int i=2, j=2, count=0;
        while(ans.size()<n)
        {
            if(ans[i]==2 && ans[j]==2)
            {
                ans.push_back(1);
                ans.push_back(1);
            }
            else if(ans[i]==2 && ans[j]==1)
            {
                ans.push_back(2);
                ans.push_back(2);
            }
            else if(ans[i]==1 && ans[j]==1) ans.push_back(2);
            else ans.push_back(1);
            i++;
            j = ans.size()-1;
        }
        for(int i=0; i<n; i++)
        {
            if(ans[i]==1) count++;
        }
        return count;
    }
};