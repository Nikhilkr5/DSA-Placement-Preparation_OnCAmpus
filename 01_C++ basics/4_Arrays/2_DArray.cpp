#include<iostream>
using namespace std;

int main(){
    int arr[3][5];

    arr[1][3] =78;

    cout<<arr[1][3]<<endl;

    cout<<arr[1][2];   //garbage value  ; everytime you print it have different values every time you print it.
    return 0;    
}

/*
for the occation you have not asigned , they will be assigning themselves some garbage value;it can be any value
*/