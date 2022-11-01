class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int count = 0;
        while(pq.size()>1)
        {
            int A = pq.top()-1;
            pq.pop();
            int B = pq.top()-1;
            pq.pop();
            count++;
            if(A) pq.push(A);
            if(B) pq.push(B);
        }
        return count;
    }
};