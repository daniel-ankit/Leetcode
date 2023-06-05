class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cord) {
        int x1 = cord[0][0], y1 = cord[0][1], x2 = cord[1][0], y2 = cord[1][1];
        for(int i=2; i<cord.size(); i++)
        {
            int x = cord[i][0], y = cord[i][1];
            if((x-x1)*(y1-y2) != (y-y1)*(x1-x2)) return 0;
        }
        return 1;
    }
};