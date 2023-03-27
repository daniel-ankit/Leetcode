class Solution {
public:
    string arrangeWords(string text) {
        map<int, vector<string>>mp;
        text += " ";
        string temp;
        for(auto x:text)
        {
            if(x==' ')
            {
                mp[temp.size()].push_back(temp);
                temp = "";
            }
            else temp += x;
        }
        text.clear();
        bool first = 1;
        for(auto x:mp)
        {
            for(auto y:x.second)
            {
                if(first)
                {
                    if(y[0] >= 'a' && y[0] <= 'z')
                        y[0] -= 32;
                    first = 0;
                }
                else
                {
                    if(y[0] >= 'A' && y[0] <= 'Z')
                        y[0] += 32;
                }
                text += y + " ";
            }
        }
        text.pop_back();
        return text;
    }
};