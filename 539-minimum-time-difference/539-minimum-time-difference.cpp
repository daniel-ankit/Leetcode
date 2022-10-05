class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(auto x:timePoints)
        {
            int hour = stoi(x.substr(0, 2));
            int min = stoi(x.substr(3, 2));
            mins.push_back(hour*60+min);
        }
        sort(mins.begin(), mins.end());
        int minn = INT_MAX;
        for(int i=0; i<mins.size()-1; i++)
            minn = min(minn, mins[i+1]-mins[i]);
        minn = min(minn, mins[0]+1440-mins[mins.size()-1]);
        return minn;
    }
};