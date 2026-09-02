#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}


int main(){
    int n;
    cin>>n;

    int original = n;
    int sum = 0;

    while(n != 0){
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if(original == sum){
        cout<<"Strong";
    }
    else{
        cout<<"Not Strong";
    }
    return 0;
}