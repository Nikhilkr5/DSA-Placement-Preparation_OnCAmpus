//Insert a new node in the end 

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){
    //first node
    Node* head = new Node;
    head->data = 10;
    
    head->next = NULL;

    //second Node
    Node* second = new Node;
    second->data = 20;
    second->next = NULL;
    head->next=second;

    //third node(to add at end
    Node* third = new Node;
    third->data = 30;
    third->next = NULL;

    //go to last node
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }

    //attch
    temp->next = third;

    //print lst
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    return 0;
}