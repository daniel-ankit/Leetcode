class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles)
    {
        map<int, int> M;
        int max=INT_MIN;
        for(int i=0; i< rectangles.size(); i++)
        {
            int temp = min(rectangles[i][0], rectangles[i][1]);
                M[temp]++;
            if(temp>max) max = temp;
        }
        return M[max];
    }
};