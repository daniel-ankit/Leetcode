//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends

Node* findIntersection(Node* head1, Node* head2)
{
    Node* ans = NULL, *temp = NULL;
    while(head1 && head2)
    {
        if(head1->data == head2->data)
        {
            Node* create = new Node(head1->data);
            if(ans == NULL) ans = temp = create;
            else
            {
                temp->next = create;
                temp = temp->next;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1->data > head2->data) head2 = head2->next;
        else head1 = head1->next;
    }
    // if(head1) temp->next = head1;
    // if(head2) temp->next = head2;
    return ans;
}