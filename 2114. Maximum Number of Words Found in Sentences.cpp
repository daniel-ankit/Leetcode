class Solution {
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int ans = INT_MIN;
        for(int i=0; i<sentences.size(); i++)
        {
            int leng;
            (sentences[i]!="") ? (leng=1) : (leng=0); 
            for(int j=0; j<sentences[i].length(); j++)
                if(sentences[i][j]==' ') leng++;
            ans = max(ans, leng);
        }
        return ans;
    }
};