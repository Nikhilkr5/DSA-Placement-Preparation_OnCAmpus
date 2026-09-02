#include<iostream>
using namespace  std;

struct Node {      //creating my own type called Node”
    int data;       //stores a number (like 5, 10, 99)
    Node* next;        //pointer that stores address of next node
};

int main(){
    Node* head = new Node;
    head-> data = 10;
    head->next = NULL;  

    cout<<head->data;
    return 0;
}