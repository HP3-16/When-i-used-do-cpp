#include<bits/stdc++.h>
using namespace std;

//reverse linkedlist iteratively
struct Node{
int data;
Node* next;

Node(int val):data(val),next(nullptr){}
~Node(){
    if(next){
        delete next;
        next = nullptr;
    }
}
};
Node* head;
void insertAtEnd(int n){
    Node* node = new Node(n);
    if(!head){
        head = node;
        return;
    }
    Node* curr = head;
    while(curr->next){
        curr = curr->next;
    }
    curr->next = node;
    curr = node;
}

void printLinkedList(Node* head){
    Node* it = head;
while(it){
    cout<<it->data<<" ";
    it = it->next;
}
cout<<"NULL";

}

void reverseLinkedList(Node** head){
    if(head == nullptr || *head == nullptr || (*head)->next == nullptr)
        return;
    
    Node* prev = nullptr;
    Node* curr = *head;
    Node* next = curr->next;

    while (curr)
    {
        curr->next = prev;
        prev = curr;
        curr = next;         
        if(next)
            next = curr->next;
    
    }
    *head = prev;
}
int main(){
insertAtEnd(1);
insertAtEnd(2);
insertAtEnd(3);
insertAtEnd(4);
insertAtEnd(5);

//printLinkedList(head);

reverseLinkedList(&head);
 printLinkedList(head);

}