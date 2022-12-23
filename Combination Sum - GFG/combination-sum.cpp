//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    void fn(vector<vector<int>>&ans, vector<int>&nums, int i, int curr, vector<int>&temp)
    {
        if(i>=nums.size() || curr<0)
        {
            if(curr == 0)
                ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        fn(ans, nums, i, curr-nums[i], temp);
        temp.pop_back();
        fn(ans, nums, i+1, curr, temp);
    }
  public:
    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        vector<vector<int>> ans;
        vector<int> temp;
        set<int>set;
        for(auto x:A) set.insert(x);
        A.clear();
        for(auto x:set) A.push_back(x);
        fn(ans, A, 0, B, temp);
        return ans;
    }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends