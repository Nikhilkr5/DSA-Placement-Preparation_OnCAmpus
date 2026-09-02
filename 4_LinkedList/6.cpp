#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){
    //create list : 5 -> 10 -> 15 -> 20 -> 30
    Node* head = new Node;
    head->data = 5;
    head->next = NULL;

    Node* second = new Node;
    second->data = 30;
    second->next = NULL;
    head->next = second;

    Node* third = new Node;
    third -> data = 40;
    third ->next = NULL;
    second->next = third;

    Node* fourth = new Node;
    fourth->data= 50;
    fourth -> next = NULL;
    third->next = fourth;

    //delete first node
    Node* temp = head;
    head = head->next;
    delete temp;

    //print list
    temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}