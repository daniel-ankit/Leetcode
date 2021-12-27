class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str)
    {
        map<string, vector<string>> M;
        for(auto x : str)
        {
            string temp = x;
            sort(x.begin(), x.end());
            M[x].push_back(temp);
        }
        vector <vector<string>> V;
        for(auto x=M.begin(); x!=M.end(); x++)
            V.push_back(x->second);
        return V;
    }
};