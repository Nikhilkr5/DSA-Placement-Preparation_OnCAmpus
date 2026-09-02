#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum =0;

    while(n>0){

        int digits= n%10;
        sum+=digits;

        n= n/10;

    }
    cout<<sum;
    return 0;
}