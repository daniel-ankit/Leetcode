#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s)
    {
        int ans=0;
        for(int i=0; i<s.size();)
        {
            if(s[i]=='I' && s[i+1]=='V') { i+=2; ans+=4; }
            else if(s[i]=='I' && s[i+1]=='X') { i+=2; ans+=9; }
            else if(s[i]=='X' && s[i+1]=='L') { i+=2; ans+=40; }
            else if(s[i]=='X' && s[i+1]=='C') { i+=2; ans+=90; }
            else if(s[i]=='C' && s[i+1]=='D') { i+=2; ans+=400; }
            else if(s[i]=='C' && s[i+1]=='M') { i+=2; ans+=900; }
            else if(s[i]=='I') { ans+=1; i++; }
            else if(s[i]=='V') { ans+=5; i++; }
            else if(s[i]=='X') { ans+=10; i++; }
            else if(s[i]=='L') { ans+=50; i++; }
            else if(s[i]=='C') { ans+=100; i++; }
            else if(s[i]=='D') { ans+=500;  i++; }
            else if(s[i]=='M') { ans+=1000; i++; }
        }
        return ans;
    }
};

int main()
{
    string num = "LXXIX";
    Solution object;
    cout << object.romanToInt(num);
    return 69;
}