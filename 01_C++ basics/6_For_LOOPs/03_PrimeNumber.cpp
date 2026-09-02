#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:  ";
    cin>>n;

    if(n<2){
        cout<<"not a prime"<<endl;
        return 0;
    }
    
    for(int num =2;num*num<=n;num++){
        if(n%num==0){
            cout<<"Not a Prime"<<endl;
            return 0;
        }
    }

    cout<<"Prime Number";
    return 0;
}