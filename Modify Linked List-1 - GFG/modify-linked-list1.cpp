//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends

class Solution{
    Node* reverse(Node* head) {
        Node* prev = NULL;
        while(head)
        {
            Node* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        if(!head->next || !head) return head;
        Node* prev = head, *slow = head, *fast = head;
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        slow = reverse(slow);
        Node* temp1 = head, *temp2 = slow;
        while(temp1 && temp2)
        {
            int a = temp1->data, b = temp2->data;
            temp1->data = b-a;
            temp2->data = a;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        slow = reverse(slow);
        temp1 = head;
        while(temp1 && temp1->next)
        {
            temp1 = temp1->next;
        }
        temp1->next = slow;
        return head;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends