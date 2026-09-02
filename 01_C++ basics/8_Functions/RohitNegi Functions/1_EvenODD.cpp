#include<iostream>
using namespace std;
int isEvenOdd(int num){
    if(num % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout<<"Enter Num: ";
    cin>>num;

    int n = isEvenOdd(num); // call function

    if(n == 0){
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }
    
    return 0;
}
