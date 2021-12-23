class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        string C[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> S;
        for(int i=0; i<words.size(); i++)
        {
            string s = "";
            for(int j=0; j<words[i].size(); j++)
                s += C[words[i][j]-97];
            S.insert(s);
        }
        return S.size();
    }
};