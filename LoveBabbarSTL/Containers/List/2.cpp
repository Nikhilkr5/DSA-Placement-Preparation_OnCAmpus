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

    myList.push_back(10); //10->20->30->10


    cout<<"before removing: "<<endl;
    list<int>::iterator it = myList.begin();

    while(it != myList.end()) {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    myList.remove(10);

    cout<<"after removing: "<<endl;
    list<int>::iterator it2 = myList.begin();

    while(it2 != myList.end()) {
        cout<<*it2<<" ";
        it2++;
    }
    cout<<endl;
}