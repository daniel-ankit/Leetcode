class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int ans = 0, n = special.size();
        sort(special.begin(), special.end());
        for(int i=0; i<n-1; i++)
            ans = max(ans, special[i+1]-special[i]-1);
        ans = max(ans, special[0]-bottom);
        ans = max(ans, top-special[n-1]);
        return ans;
    }
};