//Insert a node in beginning
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    //create inittial list
    Node* head = new Node;
    head->data =10;
    head->next = NULL;

    Node* second = new Node;
    second->data = 20;
    second->next = NULL;
    head->next = second;

    Node* third = new Node;
    third->data = 30;
    third ->next = NULL;
    second-> next = third;

    //add at beginning
    Node* newNode = new Node;
    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    return 0;
}