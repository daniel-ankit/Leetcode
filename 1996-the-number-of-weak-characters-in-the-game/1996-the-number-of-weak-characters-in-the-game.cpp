bool cmp(vector<int>&a, vector<int>&b) {
    if(a[0]==b[0]) return a[1]>b[1];
    return a[0]<b[0];
}

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int count = 0;
        sort(properties.begin(), properties.end(), cmp);
        int maxx = INT_MIN;
        for(int i=properties.size()-1; i>=0; i--)
        {
            if(properties[i][1]<maxx) count++;
            maxx = max(maxx, properties[i][1]);
        }
        return count;
    }
};