class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        set<pair<int, int>>mp;
        for(auto x:queens)
            mp.insert({x[0], x[1]});
        int x = king[0], y = king[1];
        vector<vector<int>>ans;
        while(y<8)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            y++;
        } y = king[1];
        while(y>=0)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            y--;
        } y = king[1];
        while(x<8)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            x++;
        } x = king[0];
        while(x>=0)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            x--;
        } x = king[0];
        
        while(x>=0 && y>=0)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            x--;
            y--;
        } x = king[0], y = king[1];
        while(x>=0 && y<8)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            x--;
            y++;
        } x = king[0], y = king[1];
        while(x<8 && y>=0)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            x++;
            y--;
        } x = king[0], y = king[1];
        while(x<8 && y<8)
        {
            if(mp.find({x,y}) != mp.end())
            {
                ans.push_back({x,y});
                break;
            }
            x++;
            y++;
        }
        return ans;
    }
};