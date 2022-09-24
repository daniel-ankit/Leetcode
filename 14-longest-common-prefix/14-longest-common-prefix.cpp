class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1; i<strs.size(); i++)
        {
            string temp = "";
            for(int j=0; j<min(strs[i].size(), ans.size()); j++)
            {
                if(ans[j]==strs[i][j]) temp.push_back(ans[j]);
                else break;
            }
            ans = temp;
            if(ans == "") return ans;
        }
        return ans;
    }
};