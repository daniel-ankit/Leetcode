class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxx = 0, chunks = 0;
        for(int i=0; i<arr.size(); i++)
        {
            maxx = max(maxx, arr[i]);
            if(maxx == i) chunks++;
        }
        return chunks;
    }
};