class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans, cntA(n+1, 0), cntB(n+1, 0);
        for(int i=0; i<n; i++)
        {
            cntA[A[i]]++;
            cntB[B[i]]++;
            int cnt = 0;
            for(int j=1; j<=n; j++)
                if(cntA[j]==cntB[j] && cntA[j]!=0) cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};