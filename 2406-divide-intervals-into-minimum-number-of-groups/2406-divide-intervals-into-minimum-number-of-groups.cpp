class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int arr[1000011] = {0}, maxx = 0;
        for(auto x:intervals)
        {
            arr[x[0]]++;
            arr[x[1]+1]--;
        }
        for(int i=1; i<1000010; i++)
        {
            arr[i] += arr[i-1];
            maxx = max(maxx, arr[i]);
        }
        return max(maxx, arr[0]);
    }
};
