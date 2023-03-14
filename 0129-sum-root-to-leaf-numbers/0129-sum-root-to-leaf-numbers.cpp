class Solution {
    int ans = 0;
    void inorder(TreeNode* root, vector<int> nums)
    {
        if(root==NULL) return;
        nums.push_back(root->val);
        inorder(root->left, nums);
        if(root->left==NULL && root->right==NULL)
        {
            int i = nums.size()-1;
            for(auto x:nums)
                ans += x * pow(10, i--);
        }
        inorder(root->right, nums);
        // cout << ans << " ";
    }
public:
    int sumNumbers(TreeNode* root) {
        vector<int> nums;
        inorder(root, nums);
        return ans;
    }
};