#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n)
    {
        if(n<=3) return n;
        int A[n];
        A[0]=1;
        A[1]=2;
        for(int i=2; i<n ;i++)
            A[i] = A[i-1]+A[i-2];
        return A[n-1];
    }
};


int main()
{
    Solution object;
    cout << object.climbStairs(45);
    return 69;
}