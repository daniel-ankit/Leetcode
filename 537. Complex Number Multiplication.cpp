#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    string complexNumberMultiply(string nums1, string nums2)
    {
        string Xr = "", Xi = "", Yr = "", Yi = "";
        int i;
        for(i=nums1.size()-2; nums1[i]!='+'; i--)
            Xi = nums1[i] + Xi;
        i--;
        for( ;i>=0; i--)
            Xr = nums1[i] + Xr;
        
        for(i=nums2.size()-2; nums2[i]!='+'; i--)
            Yi = nums2[i] + Yi;
        i--;
        for( ;i>=0; i--)
            Yr = nums2[i] + Yr;
        
        int a = stoll(Xr), b = stoll(Xi), c = stoll(Yr), d = stoll(Yi);
        
        int real = a*c-b*d;
        int imaginary = a*d + b*c;
        
        Xr = to_string(real);
        Xi = to_string(imaginary);
                cout << Xr << " "<< Xi;
        
        return (Xr + '+' + Xi + 'i');
    }
};

int main()
{
    string num1 = "1+1i", num2 = "1+1i";
    Solution object;
    cout << object.complexNumberMultiply(num1, num2);
    return 69;
}