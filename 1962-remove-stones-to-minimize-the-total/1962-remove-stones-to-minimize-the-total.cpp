class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(auto x:piles) pq.push(x);
        while(k--)
        {
            auto now = pq.top()+1;
            pq.pop();
            pq.push(now/2);
        }
        int sum = 0;
        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};