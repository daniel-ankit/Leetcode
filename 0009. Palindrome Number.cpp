#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x)
    {
        if(x<0) return false;
        string S1 = to_string(x);
        int size = S1.length();
        for(int i=0; i<=size/2; i++)
        {
            if(S1[i]!=S1[size-1-i])
            return false;
        }
        return true;
    }
};

int main()
{
    Solution object;
    cout << object.isPalindrome(1005001);
    return 69;
}
