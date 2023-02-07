class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> M;
        int ans = 0;
        int j = 0;
        for(int i=0; i<fruits.size(); i++)
        {
            M[fruits[i]]++;
            while(M.size()>2)
            {
                M[fruits[j]]--;
                if(M[fruits[j]]==0) M.erase(fruits[j]);
                j++;
            }
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};