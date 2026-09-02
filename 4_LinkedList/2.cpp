#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head = new Node;
    head->data= 10;
    head->next = NULL;

    Node* second = new Node;
    second->data= 20;
    second->next = NULL;

    head->next = second;

    cout<<head->data<<endl;
    cout<<second->data;
    return 0;
}