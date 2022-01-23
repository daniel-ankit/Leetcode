#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n = prices.size(), profit=0;
        for(int i=0; i<n-1; i++)
            if(prices[i]<prices[i+1]) profit += (prices[i+1]-prices[i]);
        return profit;
    }
};

int main()
{
    vector<int> V = {2, 5, 1, 11, 0, 8, 9};
    Solution object;
    cout << object.maxProfit(V);
    return 69;
}