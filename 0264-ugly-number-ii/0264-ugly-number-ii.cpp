class Solution {
    
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>>pq;
        pq.push(1);
        int prev = 0, cnt = 0;
        while(cnt<n)
        {
            while(pq.top()==prev) pq.pop();
            long long least = pq.top(); cnt++; pq.pop();
            prev = least;
            pq.push(least*2);
            pq.push(least*3);
            pq.push(least*5);
        }
        return prev;
    }
};