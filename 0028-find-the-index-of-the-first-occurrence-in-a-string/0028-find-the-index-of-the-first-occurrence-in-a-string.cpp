class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size()) return -1;
        if(needle==haystack) return 0;
        int n=haystack.size(), m=needle.size();
        for(int i=0; i<n-m+1; i++)
        {
            if(haystack.substr(i, m)==needle) return i;
        }
        return -1;
    }
};