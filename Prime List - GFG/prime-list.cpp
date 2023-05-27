//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
    bool isprime(int n)
    {
        if(n<=1) return 0;
        for(int i=2; i*i<=n; i++)
            if(n%i==0) return 0;
        return 1;
    }
public:
    Node *primeList(Node *head){
        Node* temp = head;
        while(head)
        {
            int a = head->val, b = head->val;
            while(!(isprime(a) || isprime(b)))
            {
                a--;
                b++;
            }
            if(isprime(a)) head->val = a;
            else head->val = b;
            head = head->next;
        }
        return temp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends