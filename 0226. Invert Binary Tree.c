#include<stdio.h>

typedef struct ListNode {
    int val;
    ListNode *next;
}ListNode;

typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
}TreeNode;

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

int main()
{
    
    return 69;
}