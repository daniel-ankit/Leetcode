class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<pair<int, int>>vec;
        for(int i=0; i<n; i++)
            vec.push_back({nums2[i], nums1[i]});
        sort(vec.begin(), vec.end());

        priority_queue<int, vector<int>, greater<int>>pq;
        long long sum = 0, score = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(pq.size()<k)
            {
                sum += vec[i].second;
                pq.push(vec[i].second);
            }
            else
            {
                if(pq.top()<vec[i].second)
                {
                    sum -= pq.top();
                    pq.pop();
                    pq.push({vec[i].second});
                    sum += vec[i].second;
                }
            }
            if(pq.size()==k) score = max(score, sum*vec[i].first);
        }
        return score;
    }
    
};