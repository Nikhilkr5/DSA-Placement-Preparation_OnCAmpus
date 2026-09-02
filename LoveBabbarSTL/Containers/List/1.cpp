#include<iostream>
#include<list>
using namespace std;

int main(){
    //creation
    list<int> myList;

    //insertion
    myList.push_back(10);   //10
    myList.push_back(20);   //10->20
    myList.push_back(30);   //10->20->30
    myList.push_back(40);   //10->20->30->40

    myList.push_front(100); //100->10->20->30->40

    myList.pop_back();  //100->10->20->30

    myList.pop_front(); //10->20->30

    cout<< myList.front()<<endl;
    cout<< myList.back()<<endl;

    // cout<< myList.size() << endl;
    // myList.clear();
    // cout<<myList.size()<< endl;

    // if(myList.empty() == true){
    //     cout<<"List is empty"<<endl;
    // }
    // else {
    //     cout<<"List is not empty"<<endl;
    // }
    return 0;
}