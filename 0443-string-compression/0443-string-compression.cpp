class Solution {
public:
    int compress(vector<char>& chars) {
        char last = chars[0];
        int cnt = 1;
        vector<char> temp;
        for(int i=1; i<chars.size(); i++)
        {
            if(chars[i]!=last)
            {
                temp.push_back(last);
                last = chars[i];
                if(cnt==1) continue;
                string count = to_string(cnt);
                for(auto x:count)
                    temp.push_back(x);
                cnt = 1;
            }
            else cnt++;
        }
        temp.push_back(last);
        if(cnt!=1)
        {
            string count = to_string(cnt);
            for(auto x:count)
                temp.push_back(x);
        }
        chars = temp;
        return temp.size();
    }
};