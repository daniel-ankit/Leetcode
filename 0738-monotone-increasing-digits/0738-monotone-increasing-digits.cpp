class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        if(n<10) return n;
        string temp = to_string(n);
        int j = temp.size();
        for(int i=temp.size()-1; i>0; i--)
        {
            if(temp[i-1]>temp[i])
            {
                temp[i-1]--;
                j=i;
            }
        }
        for(int i=j; i<temp.size(); i++) temp[i] = '9';
        return stoi(temp);
    }
};