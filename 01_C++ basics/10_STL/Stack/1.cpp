#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> s;

    s.push(1);
    s.push(12);
    s.push(3);

    cout<<"top = " <<s.top()<<endl;
    return 0;

}
