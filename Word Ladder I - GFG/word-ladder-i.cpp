//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string start, string target, vector<string>& list) {
        unordered_set<string> S;
        for(auto x:list) S.insert(x);
        queue<string> q;
        q.push(start);
        int steps = 1;
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                auto now = q.front();
                q.pop();
                if(now==target) return steps;
                for(int i=0; i<now.size(); i++)
                {
                    char org = now[i];
                    for(char j='a'; j<='z'; j++)
                    {
                        now[i] = j;
                        if(S.find(now)!=S.end())
                        {
                            q.push(now);
                            S.erase(now);
                        }
                    }
                    now[i] = org;
                }
            }
            steps++;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends