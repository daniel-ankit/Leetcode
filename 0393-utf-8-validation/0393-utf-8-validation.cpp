class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int i=0, n = data.size();
        while(i<n)
        {
            if(data[i] >> 7 == 0b0) i++;
            else if(i+1<n && data[i]>>5 == 0b110 && data[i+1]>>6 == 0b10) i+=2;
            else if(i+2<n && data[i]>>4 == 0b1110 && data[i+1]>>6 == 0b10 && data[i+2]>>6 == 0b10) i+=3;
            else if(i+3<n && data[i]>>3 == 0b11110 && data[i+1]>>6 == 0b10 && data[i+2]>>6 == 0b10 && data[i+3]>>6 == 0b10 && data[i+2]>>6 == 0b10) i+=4;
            else break;
        }
        return i==data.size();
    }
};