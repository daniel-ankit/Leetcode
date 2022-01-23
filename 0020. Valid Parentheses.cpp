#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s)
    {
        stack <char> STK;
        bool pass =true;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') STK.push(s[i]);
            else if(STK.empty()) return false;
            else
            {
                if(s[i]==')' && (STK.top()=='{' || STK.top()==']'))
                    return false;
                if(s[i]==']' && (STK.top()=='(' || STK.top()=='{'))
                    return false;
                if(s[i]=='}' && (STK.top()=='(' || STK.top()==']'))
                    return false;
                STK.pop();
            }
        }
        if(STK.empty()) return true;
        return false;
    }
};

int main()
{
    Solution object;
    cout << object.isValid("{{}}{[}{{}]()()){}]}");
    return 69;
}