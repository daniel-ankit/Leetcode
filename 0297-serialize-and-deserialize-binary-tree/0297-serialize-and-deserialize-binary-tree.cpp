class Codec {
public:
    string serialize(TreeNode* root) {
        string ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            auto now = q.front();
            q.pop();
            if(now)
            {
                ans += to_string(now->val) + " ";
                q.push(now->left);
                q.push(now->right);
            }
            else ans += "N ";
        }
        return ans;
    }

    TreeNode* deserialize(string data) {
        if(data == "N ") return NULL;
        string temp;
        int i=0;
        while(data[i]!=' ')
            temp += data[i++];
        
        TreeNode* root = new TreeNode(stoi(temp));
        
        queue<TreeNode*>q;
        q.push(root);
        i++;
        temp.clear();
        
        while(i<data.size())
        {
            auto now = q.front();
            q.pop();
            while(data[i]!=' ')
                temp += data[i++];
            if(temp!="N")
            {
                now->left = new TreeNode(stoi(temp));
                q.push(now->left);
            }
            temp.clear();
            i++;
            while(data[i]!=' ')
                temp += data[i++];
            if(temp!="N")
            {
                now->right = new TreeNode(stoi(temp));
                q.push(now->right);
            }
            temp.clear();
            i++;
        }
        return root;
    }
};