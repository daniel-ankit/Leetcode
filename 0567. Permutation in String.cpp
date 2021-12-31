class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        if(s1.length()>s2.length()) return 0;
        string hash1 = "0000000000000000000000000000000", hash2 = "0000000000000000000000000000000";
        int j = 0;
        for(int i=0; i<s1.length(); i++)
        {
            hash1[s1[i]-'a']++;
            hash2[s2[i]-'a']++;
            j++;
        }  
        if(hash1==hash2) return 1;
        while(j<s2.length())
        {
            char newElement = s2[j];
            int index = newElement - 'a';
            hash2[index]++;
            char oldElement = s2[j-s1.length()];
            index = oldElement - 'a';
            hash2[index]--;
            j++;
            if(hash1==hash2) return true;
            // cout << hash2 << " ";
        }
        return 0;
    }
}; 