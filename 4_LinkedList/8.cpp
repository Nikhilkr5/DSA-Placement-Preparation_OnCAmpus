//Delete a node with a SPECIFIC VALUE (e.g. delete 20)
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*  next;
};

int main(){
    //create list : 10->20->30 ->40
    Node* head = new Node;
    head->data = 10;
    head->next = NULL;
    
    Node* second = new Node;
    second->data = 20;
    second->next = NULL;
    head->next = second;

    Node* third = new Node;
    third-> data = 30;
    third-> next = NULL;
    second->next = third;

    Node* fourth = new Node;
    fourth->data = 40;
    fourth->next = NULL;
    third->next = fourth;

    int value = 20;

    //delete specific value
    if(head == NULL){

    }
    else if(head->data == value){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        Node* temp = head;
        while(temp->next != NULL && temp->next->data != value){
            temp = temp->next;
        }

        if(temp->next != NULL){
            Node* delNode = temp->next;
            temp-> next = delNode->next;
            delete delNode;
        }
    }
    //print list
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}

/*
🧠 GOLDEN RULE (remember this forever)
To delete a node, you must have access to the node BEFORE it
That’s why we check temp->next->data
*/