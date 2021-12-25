class Solution {
public:
    int largestAltitude(vector<int>& gain)
    {
        int current=0, Max=0;
        for(int i=0; i<gain.size(); i++)
        {
            current = current+gain[i];
            Max = max(Max, current);
        }
        return Max;
    }
};