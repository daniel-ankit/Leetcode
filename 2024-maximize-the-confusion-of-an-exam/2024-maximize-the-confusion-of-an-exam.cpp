class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        int i=0, j=0, t=0, f=0, maxx = 0, n=ans.size();
        while(j<n)
        {
            if(ans[j]=='T') t++;
            else f++;
            if(min(t, f)>k)
            {
                if(ans[i]=='T') t--;
                else f--;
                i++;
            }
            maxx = max(maxx, t+f);
            j++;
        }
        return maxx;
    }
};