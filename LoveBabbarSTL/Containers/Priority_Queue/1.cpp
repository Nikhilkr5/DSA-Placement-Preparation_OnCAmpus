//max heap
#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation
    priority_queue<int>pq;
    //max heap -> maximum value -> highest Priority

    pq.push(10);
    //10
    pq.push(25);
    //25,10
    pq.push(55);
    //55,25,10
    pq.push(21);
    //55,25,21,10

    //top element -> highest priority element
    cout<<pq.top()<<endl;
    //55

    pq.pop();
    //highest priority element -> pop
    //i.e -> 55 ko pop krdia
    //25,21,10


    cout<<pq.top()<<endl;
    pq.pop();
    //25 pop ho jaega
    //21,10
    cout<<pq.top()<<endl;

    cout<<pq.size()<<endl;

    if(pq.empty() == true){
        cout<<"PQ is empty"<<endl;
    }
    else {
        cout<<"PQ is not empty"<<endl;
    }

    return 0;    
}