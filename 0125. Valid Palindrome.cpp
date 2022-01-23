#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s)
    {
        string C1;
        for(int i=0; i<s.length(); i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))
                C1.push_back(s[i]);
            if(s[i]>='A' && s[i]<='Z')
                C1.push_back(s[i]+32);
        }
        string C2=C1;
        reverse(C2.begin(), C2.end());
        if(C1==C2) return true;
        return false;
    }
};

int main()
{
    Solution object;
    cout << object.isPalindrome("abc");
    return 69;
}