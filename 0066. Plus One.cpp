#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int size = digits.size()-1;
        while(size>=0)
        {
            if(digits[size]==9)
            digits[size]=0;
            else
            {
                digits[size]++;
                return digits;
            }
            size--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
int main()
{
    
    return 69;
}