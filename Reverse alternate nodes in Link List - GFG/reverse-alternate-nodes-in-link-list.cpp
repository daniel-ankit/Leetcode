//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends

#include<bits/stdc++.h>

class Solution
{
    public:
    void rearrange(struct Node *head)
    {
        Node* temp = head;
        vector<int>nums, nums2;
        int k=0;
        while(head)
        {
            
            if(k%2==0)
            nums.push_back(head->data);
            else nums2.push_back(head->data);
            k++;
            head = head->next;
        }
        head = temp;
        for(int i=0; i<nums.size(); i++)
        {
            head->data = nums[i];
            head = head->next;
        }
        for(int i=nums2.size()-1; i>=0; i--)
        {
            head->data = nums2[i];
            head = head->next;
        }
        head = temp;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends