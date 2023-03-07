void swapp(struct TreeNode* root)
{
    if(root==NULL) return;
    swapp(root->left);
    swapp(root->right);
    struct TreeNode* L = root->left;
    root->left = root->right;
    root->right = L;
}
struct TreeNode* invertTree(struct TreeNode* root){
    swapp(root);
    return root;
}