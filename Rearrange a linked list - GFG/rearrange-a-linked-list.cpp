//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

#include<bits/stdc++.h>

class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
        Node* ans = head;
       vector<int>temp;
       while(head)
       {
           temp.push_back(head->data);
           head = head->next;
       }
        head = ans;
        int i=0;
       while(i<temp.size())
       {
           head->data = temp[i];
           head = head->next;
           i+=2;
       }
       i = 1;
       while(i<temp.size())
       {
           head->data = temp[i];
           head = head->next;
           i+=2;
       }
       head = ans;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends