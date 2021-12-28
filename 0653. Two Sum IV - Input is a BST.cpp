class Solution {
public:
    void inorder(vector<int> &V, TreeNode *head)
    {
        if(!head) return;
        inorder(V, head->left);
        V.push_back(head->val);
        inorder(V, head->right);
    }
    bool findTarget(TreeNode* root, int k)
    {
        vector<int> V;
        inorder(V, root);
        int front = 0, rear = V.size()-1;
        while(front<rear)
        {
            int sum = V[front]+V[rear];
            if(sum==k) return 1;
            if(sum>k) rear--;
            else front++;
        }
        return 0;
    }
};