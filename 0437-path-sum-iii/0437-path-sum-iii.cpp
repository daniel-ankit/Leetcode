class Solution {
    void fn(TreeNode* root, vector<int>nums, int target, int &ans)
    {
        if(!root) return;
        nums.push_back(root->val);
        fn(root->left, nums, target, ans);
        fn(root->right, nums, target, ans);
        long long int sum = 0;
        for(int i=nums.size()-1; i>=0; i--)
        {
            sum += nums[i];
            if(sum == target) ans++;
        }
        nums.pop_back();
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        int ans=0;
        fn(root, {}, targetSum, ans);
        return ans;
    }
};