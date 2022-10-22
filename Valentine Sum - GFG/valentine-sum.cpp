//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends

class Solution{
    Node* tag = NULL;
    void populate(Node* root, map<Node*, Node*> &parents, int target)
    {
        if(!root) return;
        if(root->data == target) tag = root; 
        if(root->left) parents[root->left] = root;
        if(root->right) parents[root->right] = root;
        populate(root->left, parents, target);
        populate(root->right, parents, target);
    }
    public:
    int sum_at_distK(Node* root, int target, int k)
    {
        map<Node*, Node*> parents;
        set<Node*> vis;
        parents[root] = NULL;
        populate(root, parents, target);
        queue<Node*> q;
        q.push(tag);
        int ans = 0;
        while(!q.empty() && k>=0)
        {
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                auto now = q.front(); q.pop();
                if(vis.find(now)==vis.end())
                {
                    ans += now->data;
                    vis.insert(now);
                    if(parents[now]) q.push(parents[now]);
                    if(now->left) q.push(now->left);
                    if(now->right) q.push(now->right);
                }
            }
            k--;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int target,k;
        cin>> target >> k;
        getchar();
        Solution obj;
        cout<< obj.sum_at_distK(root,target,k) << endl;
    }
	return 0;
}


// } Driver Code Ends