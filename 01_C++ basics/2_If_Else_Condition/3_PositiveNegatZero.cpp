#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;

    if(n>0){
        cout<<"It is a Positive number";
    }
    else if(n<0){
        cout<<"It is a Negative number";
    }
    else{
        cout<<"it is Zero";
    }
    return 0;
}