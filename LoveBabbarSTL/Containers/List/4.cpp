//insert


#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    //10->20->30

    first.insert(first.begin(),100);
    //100->10->20->30

    list<int>::iterator it = first.begin();    

    while(it != first.end()) {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;    

    // first.swap(second);





    // list<int>::iterator it2 = first.begin();

    // while(it2 != first.end()) {
    //     cout<<*it2<<" ";
    //     it2++;
    // }
    // cout<<endl;


}