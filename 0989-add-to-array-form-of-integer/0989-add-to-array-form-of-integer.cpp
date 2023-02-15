class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num.begin(), num.end());
        for(int i=0; i<num.size(); i++)
        {
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k)
        {
            num.push_back(k%10);
            k/=10;
        }
        reverse(num.begin(), num.end());
        return num;
    }
};