#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main(){
    //create list:10->30->40
    Node* head = new Node;
    head->data = 10;
    head->next = NULL;

    Node* second = new Node;
    second->data =30;
    second->next = NULL;
    head->next = second;

    Node* third = new Node;
    third->data = 40;
    third->next = NULL;
    second->next = third;

    //count nodes
    int count =0;
    Node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout<<"Number of nodes = " <<count;

    return 0;    
}