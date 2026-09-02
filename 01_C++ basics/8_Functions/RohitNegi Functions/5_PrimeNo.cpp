#include<iostream>
using namespace std;

void findPrime(int num){
    if(num < 2){
        cout<<"Not a Prime";
        return;
    }
    for(int i =2;i*i<=num;i++){
        if(num%i==0){
            cout<<"Not a Prime"<<endl;
            return;
        }
    }

    cout<<"Prime Number";
    return;
}

int main(){
    int num1;
    cout<<"Enter Num: ";
    cin>>num1;

    findPrime(num1);

    return 0;
}