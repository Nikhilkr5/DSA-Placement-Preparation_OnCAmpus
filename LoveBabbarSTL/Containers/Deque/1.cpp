#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation
    deque<int> dq;

    //insertion
    dq.push_back(10);
    //10
    dq.push_back(20);
    //10,20
    dq.push_back(40);
    //10,20,40
    dq.push_front(100);
    //100,10,20,40
    dq.push_front(200);
    //200,100,10,20,40
    dq.push_front(300);
    //300,200,100,10,20,40


    dq.pop_front();
    //200,100,10,20,40
    dq.pop_back();
    //200,100,10,20

    cout<<dq.size();




    return 0;
}