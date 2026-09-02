#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int digits=n%10;
        cout<<digits<<" ";
        n= n/10;

    }
    return 0;
}
