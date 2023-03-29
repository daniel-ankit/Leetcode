class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(), s.end());
        int maxx = 0;
        for(int i=0; i<s.size(); i++)
        {
            int sum = 0;
            for(int j=1; i+j-1<s.size(); j++)
                sum += s[i+j-1]*j;
            maxx = max(maxx, sum);
        }
        return maxx;
    }
};