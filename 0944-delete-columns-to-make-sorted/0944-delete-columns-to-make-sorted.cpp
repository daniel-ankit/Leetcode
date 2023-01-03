class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<string> temp;
        int cnt=0;
        for(int j=0; j<strs[0].size(); j++)
        {
            string text;
            for(int i=0; i<strs.size(); i++)
                text += strs[i][j];
            temp.push_back(text);
        }
        for(auto x:temp)
        {
            string y = x;
            sort(y.begin(), y.end());
            if(x!=y) cnt++;
        }
        return cnt;
    }
};