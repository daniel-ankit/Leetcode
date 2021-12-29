class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int S = 0, B = prices[0], i;
    int N = prices.size();
    for (i = 1; i < N; i++)
    {
        if (prices[i] < B)
            B = prices[i];
        else
            S = max(S, prices[i] - B);
    }
    return S;
    }
};