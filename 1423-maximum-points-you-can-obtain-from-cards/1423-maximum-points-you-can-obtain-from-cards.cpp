class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0, total = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        k = cardPoints.size()-k;
        for(int i=0; i<k; i++) sum += cardPoints[i];
        int minn = total - sum, j = k, i = 0;
        while(j<cardPoints.size())
        {
            sum += cardPoints[j++];
            sum -= cardPoints[i++];
            minn = max(minn, total-sum);
        }
        return minn;
    }
};