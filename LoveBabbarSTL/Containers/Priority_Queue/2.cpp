//min heap
#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation
    //min heap -> Minimum Value -> Highest Priority
    priority_queue<int, vector<int>, greater<int>>pq;    //<datatype, container, comparator
    //can study more on cplusplus priority queue
    

    pq.push(100);
    //100
    pq.push(50);
    //50,100
    pq.push(75);
    //50,75, 100, 
    

    // //top element -> highest priority element
    cout<<pq.top()<<endl;
    // //50

    pq.pop();
    //highest priority element -> pop
    //i.e -> 50 ko pop krdia
    //75, 100

    cout<<pq.top()<<endl;
    pq.pop();



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

    // return 0;    
}