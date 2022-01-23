#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num)
    {
        string ans = "";
        if(num>=1000){int times = num/1000; num%=1000; for(int i=0;i<times; i++) ans+='M';}
        if(num>=900){num-=900; ans+="CM";}
        if(num>=500){num-=500; ans+='D';}
        if(num>=400){num-=400; ans+="CD";}
        if(num>=100){int times = num/100; num%=100; for(int i=0;i<times; i++) ans+='C';}
        if(num>=90){num-=90; ans+="XC";}
        if(num>=50){num-=50; ans+='L';}
        if(num>=40){num-=40; ans+="XL";}
        if(num>=10){int times = num/10; num%=10; for(int i=0;i<times; i++) ans+='X';}
        if(num>=9){num-=9; ans+="IX";}
        if(num>=5){num-=5; ans+='V';}
        if(num>=4){num-=4; ans+="IV";}
        if(num>=1){for(int i=0;i<num; i++) ans+='I';}
        return ans;
    }
};

int main()
{
    int num = 69;
    Solution object;
    cout << object.intToRoman(num);
    return 69;
}