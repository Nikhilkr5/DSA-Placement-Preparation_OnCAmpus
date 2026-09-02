#include<iostream>
using namespace std;
void printFibonacci(int n){

    if(n<=0) return;

    long a = 0;
    long b = 1;

    for(int i=0;i<n;i++){
        cout<<a<<" ";
        long next = a + b;
        a = b;
        b = next;
    }
}

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;

    printFibonacci(n);
    return 0;
}

