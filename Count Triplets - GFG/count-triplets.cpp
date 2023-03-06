//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
    vector<int>vec;
    while(head)
    {
        vec.push_back(head->data);
        head = head->next;
    }
    int cnt = 0;
    
    map<int, int>mp; // val, ind
    for(int i=0; i<vec.size(); i++)
        mp[vec[i]] = i;
        
    for(int i=0; i<vec.size()-1; i++)
    {
        for(int j=i+1; j<vec.size(); j++)
        {
            if(mp.find(x-vec[i]-vec[j])!=mp.end() && mp[x-vec[i]-vec[j]] > j) cnt++;
        }
    }
    return cnt;
} 