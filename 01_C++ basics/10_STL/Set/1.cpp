#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);


    cout<<s.size()<<endl;
    for(auto val: s){
        cout<< val<<endl;
    }
    cout<<endl;

}



/*
auto val

The keyword auto automatically deduces the type of val from the container (set<int> here).

Since your set stores int, auto val becomes int val internally.

It’s mainly used to save typing and make code flexible if you later change the container type (e.g., set<long long> → no need to update loop variable type).
*/


/*
in std::set, push_back is not allowed.



push_back belongs to sequence containers

Containers like vector, deque, list preserve insertion order and allow duplicates.

They have functions like push_back to insert elements at the end.
*/