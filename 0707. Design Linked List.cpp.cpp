#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int value)
    {
        val = value;
        next = NULL;
    }
};

class MyLinkedList {
    Node *head = NULL, *tail = NULL;
    int size = 0;
public:
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index>=size) return -1;
        Node* ptr = head;
        while(index--)
            ptr =ptr->next;
        return ptr->val;
    }
    
    void addAtHead(int val) {
        Node* New = new Node(val);
        if(!head && !tail)
            head = tail = New;
        else
        {
            New->next = head;
            head = New;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* New = new Node(val);
        if(!head && !tail)
            head = tail = New;
        else
        {
            tail->next = New;
            tail = New;
        }
        size++;
    }
    
    void addAtIndex(int index, int val)
    {
        if(index > size) return;
        
        if(index == 0){
            addAtHead(val);
        }
        else if(index == size){
            addAtTail(val);
        }
        else if(index < size){
            Node *next = head;
            Node *prev = NULL;
            int pos = 0;
            
            while(pos < index){
                prev = next;
                next = next->next;
                pos++;
            }
            
            Node *newNode = new Node(val);
            newNode->next = next;
            prev->next = newNode;
            
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index < size)
        {
            Node *cur = head, *prev = NULL, *next = NULL;
            int pos = 0;
            
            while(pos < index){
                prev = cur;
                cur = cur->next;
                pos++;
            }
            
            next = cur->next;
            if(cur == head){
                head = head->next;
                delete cur;
            }
            else if(cur == tail){
                tail = prev;
                delete cur;
            }
            else{
                prev->next = next;
                delete cur;
            }
            
            size--;
        }
    }
    void print()
    {
        Node* ptr = head;
        for(int i=1; i<=size; i++)
        {
            cout << ptr->val << " ";
            ptr = ptr->next;
        }
    }
};


int main()
{
    MyLinkedList object;
    object.addAtHead(1);
    object.print();
    cout << endl;
    object.addAtTail(3);
    object.print();
    cout << endl;
    object.addAtIndex(1, 2);
    object.print();
    cout << endl;
    cout << object.get(1) << endl;
    object.print();
    cout << endl;
    object.deleteAtIndex(1);
    object.print();
    cout << endl;
    cout << object.get(1) << endl;
    object.print();
    cout << endl;
    return 69;
}