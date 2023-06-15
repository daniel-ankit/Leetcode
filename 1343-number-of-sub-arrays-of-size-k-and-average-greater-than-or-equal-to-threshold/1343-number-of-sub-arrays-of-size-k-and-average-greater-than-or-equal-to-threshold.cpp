class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0, j=k, sum=0;
        for(int i=0; i<k; i++) sum += arr[i];
        int cnt = sum/k >= threshold ? 1 : 0;
        while(j<arr.size())
        {
            sum += arr[j++];
            sum -= arr[i++];
            if(sum/k >= threshold) cnt++;
        }
        return cnt;
    }
};