//Delete last node
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    //create list : 10->20->30
    Node* head = new Node;
    head ->data =10;
    head->next = NULL;

    Node* second = new Node;
    second->data = 20;
    second->next = NULL;
    head->next = second;

    Node* third = new Node;
    third->data = 30;
    third->next = NULL;
    second->next = third;

    //delete last node
    if(head == NULL){
        // empty list
    }
    else if(head->next == NULL) {
        delete head;
        head = NULL;
    }
    else {
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    //print list
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }   
    return 0;
}