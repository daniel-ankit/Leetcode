class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return node;
        else if(node->neighbors.size()==0)
        {
            Node* New = new Node(node->val);
            return New;
        }
        Node* head = node;
        map<Node*, vector<int>> M;
        map<Node*, bool> visited;
        queue<Node*> Q;
        Q.push(node);
        while(!Q.empty())
        {
            auto now = Q.front();
            Q.pop();
            if(!visited[now])
            {
                for(int i=0; i<now->neighbors.size(); i++)
                {
                    M[now].push_back(now->neighbors[i]->val);
                    Q.push(now->neighbors[i]);
                }
                visited[now] = 1;
            }
        }
        vector<Node*> nodes(visited.size()+1);
        for(auto x:M)
        {
            Node* New = new Node (x.first->val);
            nodes[x.first->val] = New;
        }
        head = nodes[head->val];
        for(auto x : M)
        {
            cout << x.first->val << " : ";
            for(auto y : x.second)
            {
                nodes[x.first->val]->neighbors.push_back(nodes[y]);
                cout << y << " ";
            }
            cout << endl;
        }
        return nodes[node->val];
    }
};