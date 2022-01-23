#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s)
    {
        if(s.size()==1 && s[0]!=' ') return 1;
        reverse(s.begin(), s.end());
        int i=0, space=0, count=0, Tspace=0, found=false;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
            {
                if(!found) space++;
                Tspace++;
            }
            if(s[i]!=' ') found=true;
        }
        if(Tspace==space) return s.size()-space;
        for(i=space; s[i]!=' '; i++)
            count++;
        return count;   
    }
};

int main()
{
    
    return 69;
}